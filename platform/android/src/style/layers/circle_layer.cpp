// This file is generated. Edit android/platform/scripts/generate-style-code.js, then run `make android-style-code`.

#include "circle_layer.hpp"

#include <string>
#include <mbgl/style/transition_options.hpp>

#include "../conversion/property_value.hpp"

namespace mbgl {
namespace android {

    /**
     * Creates an owning peer object (for layers not attached to the map) from the JVM side
     */
    CircleLayer::CircleLayer(jni::JNIEnv& env, jni::String layerId, jni::String sourceId)
        : Layer(env, std::make_unique<mbgl::style::CircleLayer>(jni::Make<std::string>(env, layerId), jni::Make<std::string>(env, sourceId))) {
    }

    /**
     * Creates a non-owning peer object (for layers currently attached to the map)
     */
    CircleLayer::CircleLayer(mbgl::Map& map, mbgl::style::CircleLayer& coreLayer)
        : Layer(map, coreLayer) {
    }

    /**
     * Creates an owning peer object (for layers not attached to the map)
     */
    CircleLayer::CircleLayer(mbgl::Map& map, std::unique_ptr<mbgl::style::CircleLayer> coreLayer)
        : Layer(map, std::move(coreLayer)) {
    }

    CircleLayer::~CircleLayer() = default;

    // Property getters

    jni::Object<jni::ObjectTag> CircleLayer::getCircleRadius(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleRadius());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> CircleLayer::getCircleRadiusTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleRadiusTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void CircleLayer::setCircleRadiusTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::CircleLayer>()->CircleLayer::setCircleRadiusTransition(options);
    }

    jni::Object<jni::ObjectTag> CircleLayer::getCircleColor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleColor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> CircleLayer::getCircleColorTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleColorTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void CircleLayer::setCircleColorTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::CircleLayer>()->CircleLayer::setCircleColorTransition(options);
    }

    jni::Object<jni::ObjectTag> CircleLayer::getCircleBlur(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleBlur());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> CircleLayer::getCircleBlurTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleBlurTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void CircleLayer::setCircleBlurTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::CircleLayer>()->CircleLayer::setCircleBlurTransition(options);
    }

    jni::Object<jni::ObjectTag> CircleLayer::getCircleOpacity(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleOpacity());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> CircleLayer::getCircleOpacityTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleOpacityTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void CircleLayer::setCircleOpacityTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::CircleLayer>()->CircleLayer::setCircleOpacityTransition(options);
    }

    jni::Object<jni::ObjectTag> CircleLayer::getCircleTranslate(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleTranslate());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> CircleLayer::getCircleTranslateTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleTranslateTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void CircleLayer::setCircleTranslateTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::CircleLayer>()->CircleLayer::setCircleTranslateTransition(options);
    }

    jni::Object<jni::ObjectTag> CircleLayer::getCircleTranslateAnchor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleTranslateAnchor());
        return jni::Object<jni::ObjectTag>(*converted);
    }


    jni::Object<jni::ObjectTag> CircleLayer::getCirclePitchScale(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCirclePitchScale());
        return jni::Object<jni::ObjectTag>(*converted);
    }


    jni::Object<jni::ObjectTag> CircleLayer::getCircleStrokeWidth(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleStrokeWidth());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> CircleLayer::getCircleStrokeWidthTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleStrokeWidthTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void CircleLayer::setCircleStrokeWidthTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::CircleLayer>()->CircleLayer::setCircleStrokeWidthTransition(options);
    }

    jni::Object<jni::ObjectTag> CircleLayer::getCircleStrokeColor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleStrokeColor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> CircleLayer::getCircleStrokeColorTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleStrokeColorTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void CircleLayer::setCircleStrokeColorTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::CircleLayer>()->CircleLayer::setCircleStrokeColorTransition(options);
    }

    jni::Object<jni::ObjectTag> CircleLayer::getCircleStrokeOpacity(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleStrokeOpacity());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> CircleLayer::getCircleStrokeOpacityTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::CircleLayer>()->CircleLayer::getCircleStrokeOpacityTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void CircleLayer::setCircleStrokeOpacityTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::CircleLayer>()->CircleLayer::setCircleStrokeOpacityTransition(options);
    }

    jni::Class<CircleLayer> CircleLayer::javaClass;

    jni::jobject* CircleLayer::createJavaPeer(jni::JNIEnv& env) {
        static auto constructor = CircleLayer::javaClass.template GetConstructor<jni::jlong>(env);
        return CircleLayer::javaClass.New(env, constructor, reinterpret_cast<jni::jlong>(this));
    }

    void CircleLayer::registerNative(jni::JNIEnv& env) {
        // Lookup the class
        CircleLayer::javaClass = *jni::Class<CircleLayer>::Find(env).NewGlobalRef(env).release();

        #define METHOD(MethodPtr, name) jni::MakeNativePeerMethod<decltype(MethodPtr), (MethodPtr)>(name)

        // Register the peer
        jni::RegisterNativePeer<CircleLayer>(
            env, CircleLayer::javaClass, "nativePtr",
            std::make_unique<CircleLayer, JNIEnv&, jni::String, jni::String>,
            "initialize",
            "finalize",

            METHOD(&CircleLayer::getCircleRadiusTransition, "nativeGetCircleRadiusTransition"),
            METHOD(&CircleLayer::setCircleRadiusTransition, "nativeSetCircleRadiusTransition"),
            METHOD(&CircleLayer::getCircleRadius, "nativeGetCircleRadius"),

            METHOD(&CircleLayer::getCircleColorTransition, "nativeGetCircleColorTransition"),
            METHOD(&CircleLayer::setCircleColorTransition, "nativeSetCircleColorTransition"),
            METHOD(&CircleLayer::getCircleColor, "nativeGetCircleColor"),

            METHOD(&CircleLayer::getCircleBlurTransition, "nativeGetCircleBlurTransition"),
            METHOD(&CircleLayer::setCircleBlurTransition, "nativeSetCircleBlurTransition"),
            METHOD(&CircleLayer::getCircleBlur, "nativeGetCircleBlur"),

            METHOD(&CircleLayer::getCircleOpacityTransition, "nativeGetCircleOpacityTransition"),
            METHOD(&CircleLayer::setCircleOpacityTransition, "nativeSetCircleOpacityTransition"),
            METHOD(&CircleLayer::getCircleOpacity, "nativeGetCircleOpacity"),

            METHOD(&CircleLayer::getCircleTranslateTransition, "nativeGetCircleTranslateTransition"),
            METHOD(&CircleLayer::setCircleTranslateTransition, "nativeSetCircleTranslateTransition"),
            METHOD(&CircleLayer::getCircleTranslate, "nativeGetCircleTranslate"),

            METHOD(&CircleLayer::getCircleTranslateAnchor, "nativeGetCircleTranslateAnchor"),

            METHOD(&CircleLayer::getCirclePitchScale, "nativeGetCirclePitchScale"),

            METHOD(&CircleLayer::getCircleStrokeWidthTransition, "nativeGetCircleStrokeWidthTransition"),
            METHOD(&CircleLayer::setCircleStrokeWidthTransition, "nativeSetCircleStrokeWidthTransition"),
            METHOD(&CircleLayer::getCircleStrokeWidth, "nativeGetCircleStrokeWidth"),

            METHOD(&CircleLayer::getCircleStrokeColorTransition, "nativeGetCircleStrokeColorTransition"),
            METHOD(&CircleLayer::setCircleStrokeColorTransition, "nativeSetCircleStrokeColorTransition"),
            METHOD(&CircleLayer::getCircleStrokeColor, "nativeGetCircleStrokeColor"),

            METHOD(&CircleLayer::getCircleStrokeOpacityTransition, "nativeGetCircleStrokeOpacityTransition"),
            METHOD(&CircleLayer::setCircleStrokeOpacityTransition, "nativeSetCircleStrokeOpacityTransition"),
            METHOD(&CircleLayer::getCircleStrokeOpacity, "nativeGetCircleStrokeOpacity"));
    }

} // namespace android
} // namespace mbgl
