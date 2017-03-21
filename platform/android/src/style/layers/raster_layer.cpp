// This file is generated. Edit android/platform/scripts/generate-style-code.js, then run `make android-style-code`.

#include "raster_layer.hpp"

#include <string>
#include <mbgl/style/transition_options.hpp>

#include "../conversion/property_value.hpp"

namespace mbgl {
namespace android {

    /**
     * Creates an owning peer object (for layers not attached to the map) from the JVM side
     */
    RasterLayer::RasterLayer(jni::JNIEnv& env, jni::String layerId, jni::String sourceId)
        : Layer(env, std::make_unique<mbgl::style::RasterLayer>(jni::Make<std::string>(env, layerId), jni::Make<std::string>(env, sourceId))) {
    }

    /**
     * Creates a non-owning peer object (for layers currently attached to the map)
     */
    RasterLayer::RasterLayer(mbgl::Map& map, mbgl::style::RasterLayer& coreLayer)
        : Layer(map, coreLayer) {
    }

    /**
     * Creates an owning peer object (for layers not attached to the map)
     */
    RasterLayer::RasterLayer(mbgl::Map& map, std::unique_ptr<mbgl::style::RasterLayer> coreLayer)
        : Layer(map, std::move(coreLayer)) {
    }

    RasterLayer::~RasterLayer() = default;

    // Property getters

    jni::Object<jni::ObjectTag> RasterLayer::getRasterOpacity(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterOpacity());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> RasterLayer::getRasterOpacityTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterOpacityTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void RasterLayer::setRasterOpacityTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::RasterLayer>()->RasterLayer::setRasterOpacityTransition(options);
    }

    jni::Object<jni::ObjectTag> RasterLayer::getRasterHueRotate(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterHueRotate());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> RasterLayer::getRasterHueRotateTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterHueRotateTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void RasterLayer::setRasterHueRotateTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::RasterLayer>()->RasterLayer::setRasterHueRotateTransition(options);
    }

    jni::Object<jni::ObjectTag> RasterLayer::getRasterBrightnessMin(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterBrightnessMin());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> RasterLayer::getRasterBrightnessMinTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterBrightnessMinTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void RasterLayer::setRasterBrightnessMinTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::RasterLayer>()->RasterLayer::setRasterBrightnessMinTransition(options);
    }

    jni::Object<jni::ObjectTag> RasterLayer::getRasterBrightnessMax(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterBrightnessMax());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> RasterLayer::getRasterBrightnessMaxTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterBrightnessMaxTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void RasterLayer::setRasterBrightnessMaxTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::RasterLayer>()->RasterLayer::setRasterBrightnessMaxTransition(options);
    }

    jni::Object<jni::ObjectTag> RasterLayer::getRasterSaturation(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterSaturation());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> RasterLayer::getRasterSaturationTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterSaturationTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void RasterLayer::setRasterSaturationTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::RasterLayer>()->RasterLayer::setRasterSaturationTransition(options);
    }

    jni::Object<jni::ObjectTag> RasterLayer::getRasterContrast(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterContrast());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> RasterLayer::getRasterContrastTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterContrastTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void RasterLayer::setRasterContrastTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::RasterLayer>()->RasterLayer::setRasterContrastTransition(options);
    }

    jni::Object<jni::ObjectTag> RasterLayer::getRasterFadeDuration(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterFadeDuration());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> RasterLayer::getRasterFadeDurationTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::RasterLayer>()->RasterLayer::getRasterFadeDurationTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void RasterLayer::setRasterFadeDurationTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::RasterLayer>()->RasterLayer::setRasterFadeDurationTransition(options);
    }

    jni::Class<RasterLayer> RasterLayer::javaClass;

    jni::jobject* RasterLayer::createJavaPeer(jni::JNIEnv& env) {
        static auto constructor = RasterLayer::javaClass.template GetConstructor<jni::jlong>(env);
        return RasterLayer::javaClass.New(env, constructor, reinterpret_cast<jni::jlong>(this));
    }

    void RasterLayer::registerNative(jni::JNIEnv& env) {
        // Lookup the class
        RasterLayer::javaClass = *jni::Class<RasterLayer>::Find(env).NewGlobalRef(env).release();

        #define METHOD(MethodPtr, name) jni::MakeNativePeerMethod<decltype(MethodPtr), (MethodPtr)>(name)

        // Register the peer
        jni::RegisterNativePeer<RasterLayer>(
            env, RasterLayer::javaClass, "nativePtr",
            std::make_unique<RasterLayer, JNIEnv&, jni::String, jni::String>,
            "initialize",
            "finalize",

            METHOD(&RasterLayer::getRasterOpacityTransition, "nativeGetRasterOpacityTransition"),
            METHOD(&RasterLayer::setRasterOpacityTransition, "nativeSetRasterOpacityTransition"),
            METHOD(&RasterLayer::getRasterOpacity, "nativeGetRasterOpacity"),

            METHOD(&RasterLayer::getRasterHueRotateTransition, "nativeGetRasterHueRotateTransition"),
            METHOD(&RasterLayer::setRasterHueRotateTransition, "nativeSetRasterHueRotateTransition"),
            METHOD(&RasterLayer::getRasterHueRotate, "nativeGetRasterHueRotate"),

            METHOD(&RasterLayer::getRasterBrightnessMinTransition, "nativeGetRasterBrightnessMinTransition"),
            METHOD(&RasterLayer::setRasterBrightnessMinTransition, "nativeSetRasterBrightnessMinTransition"),
            METHOD(&RasterLayer::getRasterBrightnessMin, "nativeGetRasterBrightnessMin"),

            METHOD(&RasterLayer::getRasterBrightnessMaxTransition, "nativeGetRasterBrightnessMaxTransition"),
            METHOD(&RasterLayer::setRasterBrightnessMaxTransition, "nativeSetRasterBrightnessMaxTransition"),
            METHOD(&RasterLayer::getRasterBrightnessMax, "nativeGetRasterBrightnessMax"),

            METHOD(&RasterLayer::getRasterSaturationTransition, "nativeGetRasterSaturationTransition"),
            METHOD(&RasterLayer::setRasterSaturationTransition, "nativeSetRasterSaturationTransition"),
            METHOD(&RasterLayer::getRasterSaturation, "nativeGetRasterSaturation"),

            METHOD(&RasterLayer::getRasterContrastTransition, "nativeGetRasterContrastTransition"),
            METHOD(&RasterLayer::setRasterContrastTransition, "nativeSetRasterContrastTransition"),
            METHOD(&RasterLayer::getRasterContrast, "nativeGetRasterContrast"),

            METHOD(&RasterLayer::getRasterFadeDurationTransition, "nativeGetRasterFadeDurationTransition"),
            METHOD(&RasterLayer::setRasterFadeDurationTransition, "nativeSetRasterFadeDurationTransition"),
            METHOD(&RasterLayer::getRasterFadeDuration, "nativeGetRasterFadeDuration"));
    }

} // namespace android
} // namespace mbgl
