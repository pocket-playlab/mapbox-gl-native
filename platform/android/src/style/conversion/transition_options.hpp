#pragma once

#include "../../conversion/constant.hpp"
#include "../../conversion/conversion.hpp"

#include <mbgl/util/feature.hpp>
#include <mapbox/variant.hpp>
#include <mapbox/geometry.hpp>

#include <jni/jni.hpp>
#include "../../jni/local_object.hpp"
#include "../transition_options.hpp"

#include <string>
#include <array>
#include <vector>
#include <sstream>

#include <mbgl/util/logging.hpp>
#include <mbgl/style/transition_options.hpp>

namespace mbgl {
namespace android {
namespace conversion {

template<>
struct Converter<jni::Object<TransitionOptions>, mbgl::style::TransitionOptions> {
    Result<jni::Object<TransitionOptions>> operator()(jni::JNIEnv &env, const mbgl::style::TransitionOptions &value) const {

        // Convert duration
        jlong duration = value.duration.value_or(mbgl::Duration::zero()).count();

        // Convert delay
        jlong delay = value.delay.value_or(mbgl::Duration::zero()).count();

        // Create transition options
        return TransitionOptions::fromTransitionOptions(env, duration, delay);
    }
};

}
}
}