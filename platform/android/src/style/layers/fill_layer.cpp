// This file is generated. Edit android/platform/scripts/generate-style-code.js, then run `make android-style-code`.

#include "fill_layer.hpp"

#include <string>
#include <mbgl/style/transition_options.hpp>

#include "../conversion/property_value.hpp"

namespace mbgl {
namespace android {

    /**
     * Creates an owning peer object (for layers not attached to the map) from the JVM side
     */
    FillLayer::FillLayer(jni::JNIEnv& env, jni::String layerId, jni::String sourceId)
        : Layer(env, std::make_unique<mbgl::style::FillLayer>(jni::Make<std::string>(env, layerId), jni::Make<std::string>(env, sourceId))) {
    }

    /**
     * Creates a non-owning peer object (for layers currently attached to the map)
     */
    FillLayer::FillLayer(mbgl::Map& map, mbgl::style::FillLayer& coreLayer)
        : Layer(map, coreLayer) {
    }

    /**
     * Creates an owning peer object (for layers not attached to the map)
     */
    FillLayer::FillLayer(mbgl::Map& map, std::unique_ptr<mbgl::style::FillLayer> coreLayer)
        : Layer(map, std::move(coreLayer)) {
    }

    FillLayer::~FillLayer() = default;

    // Property getters

    jni::Object<jni::ObjectTag> FillLayer::getFillAntialias(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::FillLayer>()->FillLayer::getFillAntialias());
        return jni::Object<jni::ObjectTag>(*converted);
    }


    jni::Object<jni::ObjectTag> FillLayer::getFillOpacity(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::FillLayer>()->FillLayer::getFillOpacity());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> FillLayer::getFillOpacityTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::FillLayer>()->FillLayer::getFillOpacityTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void FillLayer::setFillOpacityTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::FillLayer>()->FillLayer::setFillOpacityTransition(options);
    }

    jni::Object<jni::ObjectTag> FillLayer::getFillColor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::FillLayer>()->FillLayer::getFillColor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> FillLayer::getFillColorTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::FillLayer>()->FillLayer::getFillColorTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void FillLayer::setFillColorTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::FillLayer>()->FillLayer::setFillColorTransition(options);
    }

    jni::Object<jni::ObjectTag> FillLayer::getFillOutlineColor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::FillLayer>()->FillLayer::getFillOutlineColor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> FillLayer::getFillOutlineColorTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::FillLayer>()->FillLayer::getFillOutlineColorTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void FillLayer::setFillOutlineColorTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::FillLayer>()->FillLayer::setFillOutlineColorTransition(options);
    }

    jni::Object<jni::ObjectTag> FillLayer::getFillTranslate(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::FillLayer>()->FillLayer::getFillTranslate());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> FillLayer::getFillTranslateTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::FillLayer>()->FillLayer::getFillTranslateTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void FillLayer::setFillTranslateTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::FillLayer>()->FillLayer::setFillTranslateTransition(options);
    }

    jni::Object<jni::ObjectTag> FillLayer::getFillTranslateAnchor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::FillLayer>()->FillLayer::getFillTranslateAnchor());
        return jni::Object<jni::ObjectTag>(*converted);
    }


    jni::Object<jni::ObjectTag> FillLayer::getFillPattern(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::FillLayer>()->FillLayer::getFillPattern());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> FillLayer::getFillPatternTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::FillLayer>()->FillLayer::getFillPatternTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void FillLayer::setFillPatternTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::FillLayer>()->FillLayer::setFillPatternTransition(options);
    }

    jni::Class<FillLayer> FillLayer::javaClass;

    jni::jobject* FillLayer::createJavaPeer(jni::JNIEnv& env) {
        static auto constructor = FillLayer::javaClass.template GetConstructor<jni::jlong>(env);
        return FillLayer::javaClass.New(env, constructor, reinterpret_cast<jni::jlong>(this));
    }

    void FillLayer::registerNative(jni::JNIEnv& env) {
        // Lookup the class
        FillLayer::javaClass = *jni::Class<FillLayer>::Find(env).NewGlobalRef(env).release();

        #define METHOD(MethodPtr, name) jni::MakeNativePeerMethod<decltype(MethodPtr), (MethodPtr)>(name)

        // Register the peer
        jni::RegisterNativePeer<FillLayer>(
            env, FillLayer::javaClass, "nativePtr",
            std::make_unique<FillLayer, JNIEnv&, jni::String, jni::String>,
            "initialize",
            "finalize",

            METHOD(&FillLayer::getFillAntialias, "nativeGetFillAntialias"),

            METHOD(&FillLayer::getFillOpacityTransition, "nativeGetFillOpacityTransition"),
            METHOD(&FillLayer::setFillOpacityTransition, "nativeSetFillOpacityTransition"),
            METHOD(&FillLayer::getFillOpacity, "nativeGetFillOpacity"),

            METHOD(&FillLayer::getFillColorTransition, "nativeGetFillColorTransition"),
            METHOD(&FillLayer::setFillColorTransition, "nativeSetFillColorTransition"),
            METHOD(&FillLayer::getFillColor, "nativeGetFillColor"),

            METHOD(&FillLayer::getFillOutlineColorTransition, "nativeGetFillOutlineColorTransition"),
            METHOD(&FillLayer::setFillOutlineColorTransition, "nativeSetFillOutlineColorTransition"),
            METHOD(&FillLayer::getFillOutlineColor, "nativeGetFillOutlineColor"),

            METHOD(&FillLayer::getFillTranslateTransition, "nativeGetFillTranslateTransition"),
            METHOD(&FillLayer::setFillTranslateTransition, "nativeSetFillTranslateTransition"),
            METHOD(&FillLayer::getFillTranslate, "nativeGetFillTranslate"),

            METHOD(&FillLayer::getFillTranslateAnchor, "nativeGetFillTranslateAnchor"),

            METHOD(&FillLayer::getFillPatternTransition, "nativeGetFillPatternTransition"),
            METHOD(&FillLayer::setFillPatternTransition, "nativeSetFillPatternTransition"),
            METHOD(&FillLayer::getFillPattern, "nativeGetFillPattern"));
    }

} // namespace android
} // namespace mbgl
