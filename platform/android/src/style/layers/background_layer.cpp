// This file is generated. Edit android/platform/scripts/generate-style-code.js, then run `make android-style-code`.

#include "background_layer.hpp"

#include <string>
#include <mbgl/style/transition_options.hpp>

#include "../conversion/property_value.hpp"

namespace mbgl {
namespace android {

    /**
     * Creates an owning peer object (for layers not attached to the map) from the JVM side
     */
    BackgroundLayer::BackgroundLayer(jni::JNIEnv& env, jni::String layerId)
        : Layer(env, std::make_unique<mbgl::style::BackgroundLayer>(jni::Make<std::string>(env, layerId))) {
    }

    /**
     * Creates a non-owning peer object (for layers currently attached to the map)
     */
    BackgroundLayer::BackgroundLayer(mbgl::Map& map, mbgl::style::BackgroundLayer& coreLayer)
        : Layer(map, coreLayer) {
    }

    /**
     * Creates an owning peer object (for layers not attached to the map)
     */
    BackgroundLayer::BackgroundLayer(mbgl::Map& map, std::unique_ptr<mbgl::style::BackgroundLayer> coreLayer)
        : Layer(map, std::move(coreLayer)) {
    }

    BackgroundLayer::~BackgroundLayer() = default;

    // Property getters

    jni::Object<jni::ObjectTag> BackgroundLayer::getBackgroundColor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::BackgroundLayer>()->BackgroundLayer::getBackgroundColor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> BackgroundLayer::getBackgroundColorTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::BackgroundLayer>()->BackgroundLayer::getBackgroundColorTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void BackgroundLayer::setBackgroundColorTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::BackgroundLayer>()->BackgroundLayer::setBackgroundColorTransition(options);
    }

    jni::Object<jni::ObjectTag> BackgroundLayer::getBackgroundPattern(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::BackgroundLayer>()->BackgroundLayer::getBackgroundPattern());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> BackgroundLayer::getBackgroundPatternTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::BackgroundLayer>()->BackgroundLayer::getBackgroundPatternTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void BackgroundLayer::setBackgroundPatternTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::BackgroundLayer>()->BackgroundLayer::setBackgroundPatternTransition(options);
    }

    jni::Object<jni::ObjectTag> BackgroundLayer::getBackgroundOpacity(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::BackgroundLayer>()->BackgroundLayer::getBackgroundOpacity());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> BackgroundLayer::getBackgroundOpacityTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::BackgroundLayer>()->BackgroundLayer::getBackgroundOpacityTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void BackgroundLayer::setBackgroundOpacityTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::BackgroundLayer>()->BackgroundLayer::setBackgroundOpacityTransition(options);
    }

    jni::Class<BackgroundLayer> BackgroundLayer::javaClass;

    jni::jobject* BackgroundLayer::createJavaPeer(jni::JNIEnv& env) {
        static auto constructor = BackgroundLayer::javaClass.template GetConstructor<jni::jlong>(env);
        return BackgroundLayer::javaClass.New(env, constructor, reinterpret_cast<jni::jlong>(this));
    }

    void BackgroundLayer::registerNative(jni::JNIEnv& env) {
        // Lookup the class
        BackgroundLayer::javaClass = *jni::Class<BackgroundLayer>::Find(env).NewGlobalRef(env).release();

        #define METHOD(MethodPtr, name) jni::MakeNativePeerMethod<decltype(MethodPtr), (MethodPtr)>(name)

        // Register the peer
        jni::RegisterNativePeer<BackgroundLayer>(
            env, BackgroundLayer::javaClass, "nativePtr",
            std::make_unique<BackgroundLayer, JNIEnv&, jni::String>,
            "initialize",
            "finalize",

            METHOD(&BackgroundLayer::getBackgroundColorTransition, "nativeGetBackgroundColorTransition"),
            METHOD(&BackgroundLayer::setBackgroundColorTransition, "nativeSetBackgroundColorTransition"),
            METHOD(&BackgroundLayer::getBackgroundColor, "nativeGetBackgroundColor"),

            METHOD(&BackgroundLayer::getBackgroundPatternTransition, "nativeGetBackgroundPatternTransition"),
            METHOD(&BackgroundLayer::setBackgroundPatternTransition, "nativeSetBackgroundPatternTransition"),
            METHOD(&BackgroundLayer::getBackgroundPattern, "nativeGetBackgroundPattern"),

            METHOD(&BackgroundLayer::getBackgroundOpacityTransition, "nativeGetBackgroundOpacityTransition"),
            METHOD(&BackgroundLayer::setBackgroundOpacityTransition, "nativeSetBackgroundOpacityTransition"),
            METHOD(&BackgroundLayer::getBackgroundOpacity, "nativeGetBackgroundOpacity"));
    }

} // namespace android
} // namespace mbgl
