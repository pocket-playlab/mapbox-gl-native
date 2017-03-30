namespace mbgl {
namespace android {
namespace geojson {

// Clang 3.8 fails to implicitly convert matching types, so we'll have to do it explicitly.
template <typename To, typename From>
To convertExplicit(From src) {
    To dst;
    std::swap(dst, src);
    return dst;
}

} // namespace geojson
} // namespace android
} // namespace mbgl