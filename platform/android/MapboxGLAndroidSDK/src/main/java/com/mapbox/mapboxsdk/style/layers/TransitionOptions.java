package com.mapbox.mapboxsdk.style.layers;

import com.google.gson.JsonObject;
import com.mapbox.services.commons.geojson.Feature;
import com.mapbox.services.commons.geojson.Geometry;

public class TransitionOptions {

  private long duration;
  private long delay;

  public TransitionOptions(long duration, long delay) {
    this.duration = duration;
    this.delay = delay;
  }

  public static TransitionOptions fromTransitionOptions(long duration, long delay) {
    return new TransitionOptions(duration, delay);
  }

  public long getDuration() {
    return duration;
  }

  public long getDelay() {
    return delay;
  }

  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }

    TransitionOptions that = (TransitionOptions) o;

    if (duration != that.duration) {
      return false;
    }
    return delay == that.delay;
  }

  @Override
  public int hashCode() {
    int result = (int) (duration ^ (duration >>> 32));
    result = 31 * result + (int) (delay ^ (delay >>> 32));
    return result;
  }
}
