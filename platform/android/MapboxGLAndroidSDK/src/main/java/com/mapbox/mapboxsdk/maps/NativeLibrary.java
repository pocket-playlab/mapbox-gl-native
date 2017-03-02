package com.mapbox.mapboxsdk.maps;


class NativeLibrary implements Loadable {
  @Override
  public void load() {
    System.loadLibrary("mapbox-gl");
  }
}