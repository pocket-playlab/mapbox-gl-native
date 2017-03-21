// This file is generated. Edit android/platform/scripts/generate-style-code.js, then run `make android-style-code`.

#include "line_layer.hpp"

#include <string>
#include <mbgl/style/transition_options.hpp>

#include "../conversion/property_value.hpp"

namespace mbgl {
namespace android {

    /**
     * Creates an owning peer object (for layers not attached to the map) from the JVM side
     */
    LineLayer::LineLayer(jni::JNIEnv& env, jni::String layerId, jni::String sourceId)
        : Layer(env, std::make_unique<mbgl::style::LineLayer>(jni::Make<std::string>(env, layerId), jni::Make<std::string>(env, sourceId))) {
    }

    /**
     * Creates a non-owning peer object (for layers currently attached to the map)
     */
    LineLayer::LineLayer(mbgl::Map& map, mbgl::style::LineLayer& coreLayer)
        : Layer(map, coreLayer) {
    }

    /**
     * Creates an owning peer object (for layers not attached to the map)
     */
    LineLayer::LineLayer(mbgl::Map& map, std::unique_ptr<mbgl::style::LineLayer> coreLayer)
        : Layer(map, std::move(coreLayer)) {
    }

    LineLayer::~LineLayer() = default;

    // Property getters

    jni::Object<jni::ObjectTag> LineLayer::getLineCap(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineCap());
        return jni::Object<jni::ObjectTag>(*converted);
    }


    jni::Object<jni::ObjectTag> LineLayer::getLineJoin(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineJoin());
        return jni::Object<jni::ObjectTag>(*converted);
    }


    jni::Object<jni::ObjectTag> LineLayer::getLineMiterLimit(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineMiterLimit());
        return jni::Object<jni::ObjectTag>(*converted);
    }


    jni::Object<jni::ObjectTag> LineLayer::getLineRoundLimit(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineRoundLimit());
        return jni::Object<jni::ObjectTag>(*converted);
    }


    jni::Object<jni::ObjectTag> LineLayer::getLineOpacity(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineOpacity());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> LineLayer::getLineOpacityTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::LineLayer>()->LineLayer::getLineOpacityTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void LineLayer::setLineOpacityTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::LineLayer>()->LineLayer::setLineOpacityTransition(options);
    }

    jni::Object<jni::ObjectTag> LineLayer::getLineColor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineColor());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> LineLayer::getLineColorTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::LineLayer>()->LineLayer::getLineColorTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void LineLayer::setLineColorTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::LineLayer>()->LineLayer::setLineColorTransition(options);
    }

    jni::Object<jni::ObjectTag> LineLayer::getLineTranslate(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineTranslate());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> LineLayer::getLineTranslateTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::LineLayer>()->LineLayer::getLineTranslateTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void LineLayer::setLineTranslateTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::LineLayer>()->LineLayer::setLineTranslateTransition(options);
    }

    jni::Object<jni::ObjectTag> LineLayer::getLineTranslateAnchor(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineTranslateAnchor());
        return jni::Object<jni::ObjectTag>(*converted);
    }


    jni::Object<jni::ObjectTag> LineLayer::getLineWidth(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineWidth());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> LineLayer::getLineWidthTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::LineLayer>()->LineLayer::getLineWidthTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void LineLayer::setLineWidthTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::LineLayer>()->LineLayer::setLineWidthTransition(options);
    }

    jni::Object<jni::ObjectTag> LineLayer::getLineGapWidth(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineGapWidth());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> LineLayer::getLineGapWidthTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::LineLayer>()->LineLayer::getLineGapWidthTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void LineLayer::setLineGapWidthTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::LineLayer>()->LineLayer::setLineGapWidthTransition(options);
    }

    jni::Object<jni::ObjectTag> LineLayer::getLineOffset(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineOffset());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> LineLayer::getLineOffsetTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::LineLayer>()->LineLayer::getLineOffsetTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void LineLayer::setLineOffsetTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::LineLayer>()->LineLayer::setLineOffsetTransition(options);
    }

    jni::Object<jni::ObjectTag> LineLayer::getLineBlur(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineBlur());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> LineLayer::getLineBlurTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::LineLayer>()->LineLayer::getLineBlurTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void LineLayer::setLineBlurTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::LineLayer>()->LineLayer::setLineBlurTransition(options);
    }

    jni::Object<jni::ObjectTag> LineLayer::getLineDasharray(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLineDasharray());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> LineLayer::getLineDasharrayTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::LineLayer>()->LineLayer::getLineDasharrayTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void LineLayer::setLineDasharrayTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::LineLayer>()->LineLayer::setLineDasharrayTransition(options);
    }

    jni::Object<jni::ObjectTag> LineLayer::getLinePattern(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;
        Result<jni::jobject*> converted = convert<jni::jobject*>(env, layer.as<mbgl::style::LineLayer>()->LineLayer::getLinePattern());
        return jni::Object<jni::ObjectTag>(*converted);
    }

    jni::Array<jni::jlong> LineLayer::getLinePatternTransition(jni::JNIEnv& env) {
        using namespace mbgl::android::conversion;

        mbgl::style::TransitionOptions options = layer.as<mbgl::style::LineLayer>()->LineLayer::getLinePatternTransition();
        jlong durations[2];
        durations[0] = options.duration.value_or(mbgl::Duration::zero()).count();
        durations[1] = options.delay.value_or(mbgl::Duration::zero()).count();
        auto output = jni::Array<jni::jlong>::New(env, 2);
        jni::SetArrayRegion(env, *output, 0, 2, durations);
        return output;
    }

    void LineLayer::setLinePatternTransition(jni::JNIEnv& env, jlong duration, jlong delay) {
        (void) env;
        mbgl::style::TransitionOptions options = {mbgl::Duration(duration), mbgl::Duration(delay)};
        layer.as<mbgl::style::LineLayer>()->LineLayer::setLinePatternTransition(options);
    }

    jni::Class<LineLayer> LineLayer::javaClass;

    jni::jobject* LineLayer::createJavaPeer(jni::JNIEnv& env) {
        static auto constructor = LineLayer::javaClass.template GetConstructor<jni::jlong>(env);
        return LineLayer::javaClass.New(env, constructor, reinterpret_cast<jni::jlong>(this));
    }

    void LineLayer::registerNative(jni::JNIEnv& env) {
        // Lookup the class
        LineLayer::javaClass = *jni::Class<LineLayer>::Find(env).NewGlobalRef(env).release();

        #define METHOD(MethodPtr, name) jni::MakeNativePeerMethod<decltype(MethodPtr), (MethodPtr)>(name)

        // Register the peer
        jni::RegisterNativePeer<LineLayer>(
            env, LineLayer::javaClass, "nativePtr",
            std::make_unique<LineLayer, JNIEnv&, jni::String, jni::String>,
            "initialize",
            "finalize",

            METHOD(&LineLayer::getLineCap, "nativeGetLineCap"),

            METHOD(&LineLayer::getLineJoin, "nativeGetLineJoin"),

            METHOD(&LineLayer::getLineMiterLimit, "nativeGetLineMiterLimit"),

            METHOD(&LineLayer::getLineRoundLimit, "nativeGetLineRoundLimit"),

            METHOD(&LineLayer::getLineOpacityTransition, "nativeGetLineOpacityTransition"),
            METHOD(&LineLayer::setLineOpacityTransition, "nativeSetLineOpacityTransition"),
            METHOD(&LineLayer::getLineOpacity, "nativeGetLineOpacity"),

            METHOD(&LineLayer::getLineColorTransition, "nativeGetLineColorTransition"),
            METHOD(&LineLayer::setLineColorTransition, "nativeSetLineColorTransition"),
            METHOD(&LineLayer::getLineColor, "nativeGetLineColor"),

            METHOD(&LineLayer::getLineTranslateTransition, "nativeGetLineTranslateTransition"),
            METHOD(&LineLayer::setLineTranslateTransition, "nativeSetLineTranslateTransition"),
            METHOD(&LineLayer::getLineTranslate, "nativeGetLineTranslate"),

            METHOD(&LineLayer::getLineTranslateAnchor, "nativeGetLineTranslateAnchor"),

            METHOD(&LineLayer::getLineWidthTransition, "nativeGetLineWidthTransition"),
            METHOD(&LineLayer::setLineWidthTransition, "nativeSetLineWidthTransition"),
            METHOD(&LineLayer::getLineWidth, "nativeGetLineWidth"),

            METHOD(&LineLayer::getLineGapWidthTransition, "nativeGetLineGapWidthTransition"),
            METHOD(&LineLayer::setLineGapWidthTransition, "nativeSetLineGapWidthTransition"),
            METHOD(&LineLayer::getLineGapWidth, "nativeGetLineGapWidth"),

            METHOD(&LineLayer::getLineOffsetTransition, "nativeGetLineOffsetTransition"),
            METHOD(&LineLayer::setLineOffsetTransition, "nativeSetLineOffsetTransition"),
            METHOD(&LineLayer::getLineOffset, "nativeGetLineOffset"),

            METHOD(&LineLayer::getLineBlurTransition, "nativeGetLineBlurTransition"),
            METHOD(&LineLayer::setLineBlurTransition, "nativeSetLineBlurTransition"),
            METHOD(&LineLayer::getLineBlur, "nativeGetLineBlur"),

            METHOD(&LineLayer::getLineDasharrayTransition, "nativeGetLineDasharrayTransition"),
            METHOD(&LineLayer::setLineDasharrayTransition, "nativeSetLineDasharrayTransition"),
            METHOD(&LineLayer::getLineDasharray, "nativeGetLineDasharray"),

            METHOD(&LineLayer::getLinePatternTransition, "nativeGetLinePatternTransition"),
            METHOD(&LineLayer::setLinePatternTransition, "nativeSetLinePatternTransition"),
            METHOD(&LineLayer::getLinePattern, "nativeGetLinePattern"));
    }

} // namespace android
} // namespace mbgl
