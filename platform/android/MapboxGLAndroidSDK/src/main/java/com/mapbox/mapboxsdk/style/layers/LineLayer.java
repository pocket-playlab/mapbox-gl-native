// This file is generated. Edit android/platform/scripts/generate-style-code.js, then run `make android-style-code`.

package com.mapbox.mapboxsdk.style.layers;

import android.support.annotation.ColorInt;
import android.support.annotation.NonNull;
import android.support.annotation.UiThread;

import static com.mapbox.mapboxsdk.utils.ColorUtils.rgbaToColor;

import com.mapbox.mapboxsdk.style.TransitionOptions;

/**
 * A stroked line.
 *
 * @see <a href="https://www.mapbox.com/mapbox-gl-style-spec/#layers-line">The online documentation</a>
 */
@UiThread
public class LineLayer extends Layer {

  /**
   * Creates a LineLayer.
   *
   * @param nativePtr pointer used by core
   */
  public LineLayer(long nativePtr) {
    super(nativePtr);
  }

  /**
   * Creates a LineLayer.
   *
   * @param layerId  the id of the layer
   * @param sourceId the id of the source
   */
  public LineLayer(String layerId, String sourceId) {
    initialize(layerId, sourceId);
  }

  protected native void initialize(String layerId, String sourceId);

  /**
   * Set the source layer.
   *
   * @param sourceLayer the source layer to set
   */
  public void setSourceLayer(String sourceLayer) {
    nativeSetSourceLayer(sourceLayer);
  }

  /**
   * Set the source Layer.
   *
   * @param sourceLayer the source layer to set
   * @return This
   */
  public LineLayer withSourceLayer(String sourceLayer) {
    setSourceLayer(sourceLayer);
    return this;
  }

  /**
   * Set a single filter.
   *
   * @param filter the filter to set
   */
  public void setFilter(Filter.Statement filter) {
    nativeSetFilter(filter.toArray());
  }

  /**
   * Set a single filter.
   *
   * @param filter the filter to set
   * @return This
   */
  public LineLayer withFilter(Filter.Statement filter) {
    setFilter(filter);
    return this;
  }

  /**
   * Set a property or properties.
   *
   * @param properties the var-args properties
   * @return This
   */
  public LineLayer withProperties(@NonNull PropertyValue<?>... properties) {
    setProperties(properties);
    return this;
  }

  // Property getters

  /**
   * Get the LineCap property
   *
   * @return property wrapper value around String
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<String> getLineCap() {
    return (PropertyValue<String>) new PropertyValue("line-cap", nativeGetLineCap());
  }

  /**
   * Get the LineJoin property
   *
   * @return property wrapper value around String
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<String> getLineJoin() {
    return (PropertyValue<String>) new PropertyValue("line-join", nativeGetLineJoin());
  }

  /**
   * Get the LineMiterLimit property
   *
   * @return property wrapper value around Float
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<Float> getLineMiterLimit() {
    return (PropertyValue<Float>) new PropertyValue("line-miter-limit", nativeGetLineMiterLimit());
  }

  /**
   * Get the LineRoundLimit property
   *
   * @return property wrapper value around Float
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<Float> getLineRoundLimit() {
    return (PropertyValue<Float>) new PropertyValue("line-round-limit", nativeGetLineRoundLimit());
  }

  /**
   * Get the LineOpacity property
   *
   * @return property wrapper value around Float
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<Float> getLineOpacity() {
    return (PropertyValue<Float>) new PropertyValue("line-opacity", nativeGetLineOpacity());
  }

  /**
   * Get the LineOpacity property transition options
   *
   * @return transition options for Float
   */
  public TransitionOptions getLineOpacityTransition() {
    long[] durations = nativeGetLineOpacityTransition();
    return new TransitionOptions(durations[0], durations[1]);
  }

  /**
   * Set the LineOpacity property transition options
   *
   * @param options transition options for Float
   */
  public void setLineOpacityTransition(TransitionOptions options) {
    nativeSetLineOpacityTransition(options.getDuration(), options.getDelay());
  }

  /**
   * Get the LineColor property
   *
   * @return property wrapper value around String
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<String> getLineColor() {
    return (PropertyValue<String>) new PropertyValue("line-color", nativeGetLineColor());
  }

  /**
   * The color with which the line will be drawn.
   *
   * @return int representation of a rgba string color
   * @throws RuntimeException thrown if property isn't a value
   */
  @ColorInt
  public int getLineColorAsInt() {
    PropertyValue<String> value = getLineColor();
    if (value.isValue()) {
      return rgbaToColor(value.getValue());
    } else {
      throw new RuntimeException("line-color was set as a Function");
    }
  }

  /**
   * Get the LineColor property transition options
   *
   * @return transition options for String
   */
  public TransitionOptions getLineColorTransition() {
    long[] durations = nativeGetLineColorTransition();
    return new TransitionOptions(durations[0], durations[1]);
  }

  /**
   * Set the LineColor property transition options
   *
   * @param options transition options for String
   */
  public void setLineColorTransition(TransitionOptions options) {
    nativeSetLineColorTransition(options.getDuration(), options.getDelay());
  }

  /**
   * Get the LineTranslate property
   *
   * @return property wrapper value around Float[]
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<Float[]> getLineTranslate() {
    return (PropertyValue<Float[]>) new PropertyValue("line-translate", nativeGetLineTranslate());
  }

  /**
   * Get the LineTranslate property transition options
   *
   * @return transition options for Float[]
   */
  public TransitionOptions getLineTranslateTransition() {
    long[] durations = nativeGetLineTranslateTransition();
    return new TransitionOptions(durations[0], durations[1]);
  }

  /**
   * Set the LineTranslate property transition options
   *
   * @param options transition options for Float[]
   */
  public void setLineTranslateTransition(TransitionOptions options) {
    nativeSetLineTranslateTransition(options.getDuration(), options.getDelay());
  }

  /**
   * Get the LineTranslateAnchor property
   *
   * @return property wrapper value around String
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<String> getLineTranslateAnchor() {
    return (PropertyValue<String>) new PropertyValue("line-translate-anchor", nativeGetLineTranslateAnchor());
  }

  /**
   * Get the LineWidth property
   *
   * @return property wrapper value around Float
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<Float> getLineWidth() {
    return (PropertyValue<Float>) new PropertyValue("line-width", nativeGetLineWidth());
  }

  /**
   * Get the LineWidth property transition options
   *
   * @return transition options for Float
   */
  public TransitionOptions getLineWidthTransition() {
    long[] durations = nativeGetLineWidthTransition();
    return new TransitionOptions(durations[0], durations[1]);
  }

  /**
   * Set the LineWidth property transition options
   *
   * @param options transition options for Float
   */
  public void setLineWidthTransition(TransitionOptions options) {
    nativeSetLineWidthTransition(options.getDuration(), options.getDelay());
  }

  /**
   * Get the LineGapWidth property
   *
   * @return property wrapper value around Float
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<Float> getLineGapWidth() {
    return (PropertyValue<Float>) new PropertyValue("line-gap-width", nativeGetLineGapWidth());
  }

  /**
   * Get the LineGapWidth property transition options
   *
   * @return transition options for Float
   */
  public TransitionOptions getLineGapWidthTransition() {
    long[] durations = nativeGetLineGapWidthTransition();
    return new TransitionOptions(durations[0], durations[1]);
  }

  /**
   * Set the LineGapWidth property transition options
   *
   * @param options transition options for Float
   */
  public void setLineGapWidthTransition(TransitionOptions options) {
    nativeSetLineGapWidthTransition(options.getDuration(), options.getDelay());
  }

  /**
   * Get the LineOffset property
   *
   * @return property wrapper value around Float
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<Float> getLineOffset() {
    return (PropertyValue<Float>) new PropertyValue("line-offset", nativeGetLineOffset());
  }

  /**
   * Get the LineOffset property transition options
   *
   * @return transition options for Float
   */
  public TransitionOptions getLineOffsetTransition() {
    long[] durations = nativeGetLineOffsetTransition();
    return new TransitionOptions(durations[0], durations[1]);
  }

  /**
   * Set the LineOffset property transition options
   *
   * @param options transition options for Float
   */
  public void setLineOffsetTransition(TransitionOptions options) {
    nativeSetLineOffsetTransition(options.getDuration(), options.getDelay());
  }

  /**
   * Get the LineBlur property
   *
   * @return property wrapper value around Float
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<Float> getLineBlur() {
    return (PropertyValue<Float>) new PropertyValue("line-blur", nativeGetLineBlur());
  }

  /**
   * Get the LineBlur property transition options
   *
   * @return transition options for Float
   */
  public TransitionOptions getLineBlurTransition() {
    long[] durations = nativeGetLineBlurTransition();
    return new TransitionOptions(durations[0], durations[1]);
  }

  /**
   * Set the LineBlur property transition options
   *
   * @param options transition options for Float
   */
  public void setLineBlurTransition(TransitionOptions options) {
    nativeSetLineBlurTransition(options.getDuration(), options.getDelay());
  }

  /**
   * Get the LineDasharray property
   *
   * @return property wrapper value around Float[]
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<Float[]> getLineDasharray() {
    return (PropertyValue<Float[]>) new PropertyValue("line-dasharray", nativeGetLineDasharray());
  }

  /**
   * Get the LineDasharray property transition options
   *
   * @return transition options for Float[]
   */
  public TransitionOptions getLineDasharrayTransition() {
    long[] durations = nativeGetLineDasharrayTransition();
    return new TransitionOptions(durations[0], durations[1]);
  }

  /**
   * Set the LineDasharray property transition options
   *
   * @param options transition options for Float[]
   */
  public void setLineDasharrayTransition(TransitionOptions options) {
    nativeSetLineDasharrayTransition(options.getDuration(), options.getDelay());
  }

  /**
   * Get the LinePattern property
   *
   * @return property wrapper value around String
   */
  @SuppressWarnings("unchecked")
  public PropertyValue<String> getLinePattern() {
    return (PropertyValue<String>) new PropertyValue("line-pattern", nativeGetLinePattern());
  }

  /**
   * Get the LinePattern property transition options
   *
   * @return transition options for String
   */
  public TransitionOptions getLinePatternTransition() {
    long[] durations = nativeGetLinePatternTransition();
    return new TransitionOptions(durations[0], durations[1]);
  }

  /**
   * Set the LinePattern property transition options
   *
   * @param options transition options for String
   */
  public void setLinePatternTransition(TransitionOptions options) {
    nativeSetLinePatternTransition(options.getDuration(), options.getDelay());
  }

  private native Object nativeGetLineCap();

  private native Object nativeGetLineJoin();

  private native Object nativeGetLineMiterLimit();

  private native Object nativeGetLineRoundLimit();

  private native Object nativeGetLineOpacity();

  private native long[] nativeGetLineOpacityTransition();

  private native void nativeSetLineOpacityTransition(long duration, long delay);

  private native Object nativeGetLineColor();

  private native long[] nativeGetLineColorTransition();

  private native void nativeSetLineColorTransition(long duration, long delay);

  private native Object nativeGetLineTranslate();

  private native long[] nativeGetLineTranslateTransition();

  private native void nativeSetLineTranslateTransition(long duration, long delay);

  private native Object nativeGetLineTranslateAnchor();

  private native Object nativeGetLineWidth();

  private native long[] nativeGetLineWidthTransition();

  private native void nativeSetLineWidthTransition(long duration, long delay);

  private native Object nativeGetLineGapWidth();

  private native long[] nativeGetLineGapWidthTransition();

  private native void nativeSetLineGapWidthTransition(long duration, long delay);

  private native Object nativeGetLineOffset();

  private native long[] nativeGetLineOffsetTransition();

  private native void nativeSetLineOffsetTransition(long duration, long delay);

  private native Object nativeGetLineBlur();

  private native long[] nativeGetLineBlurTransition();

  private native void nativeSetLineBlurTransition(long duration, long delay);

  private native Object nativeGetLineDasharray();

  private native long[] nativeGetLineDasharrayTransition();

  private native void nativeSetLineDasharrayTransition(long duration, long delay);

  private native Object nativeGetLinePattern();

  private native long[] nativeGetLinePatternTransition();

  private native void nativeSetLinePatternTransition(long duration, long delay);

  @Override
  protected native void finalize() throws Throwable;

}
