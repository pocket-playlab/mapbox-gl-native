package com.mapbox.mapboxsdk.maps;


import android.support.annotation.NonNull;
import android.support.v4.util.LongSparseArray;

import com.mapbox.mapboxsdk.annotations.Annotation;

import java.util.ArrayList;
import java.util.List;

public class AnnotationsFunctions implements Annotations {

  private final NativeMapView nativeMapView;
  private final LongSparseArray<Annotation> annotations;

  public AnnotationsFunctions(NativeMapView nativeMapView, LongSparseArray<Annotation> annotations) {
    this.nativeMapView = nativeMapView;
    this.annotations = annotations;
  }

  @Override
  public Annotation getAnnotation(long id) {
    return annotations.get(id);
  }

  @Override
  public List<Annotation> getAnnotations() {
    List<Annotation> annotations = new ArrayList<>();
    for (int i = 0; i < this.annotations.size(); i++) {
      annotations.add(this.annotations.get(this.annotations.keyAt(i)));
    }
    return annotations;
  }

  @Override
  public void removeAnnotation(long id) {
    if (nativeMapView != null) {
      nativeMapView.removeAnnotation(id);
    }
    annotations.remove(id);
  }

  @Override
  public void removeAnnotation(@NonNull Annotation annotation) {
    long id = annotation.getId();
    removeAnnotation(id);
  }

  @Override
  public void removeAnnotations() {
    int count = annotations.size();
    long[] ids = new long[count];
    for (int i = 0; i < count; i++) {
      ids[i] = annotations.keyAt(i);
    }

    removeNativeAnnotations(ids);

    annotations.clear();
  }

  @Override
  public void removeAnnotations(@NonNull List<? extends Annotation> annotationList) {
    int count = annotationList.size();
    long[] ids = new long[count];
    for (int i = 0; i < count; i++) {
      ids[i] = annotationList.get(i).getId();
    }

    removeNativeAnnotations(ids);

    for (long id : ids) {
      annotations.remove(id);
    }
  }

  private void removeNativeAnnotations(long[] ids) {
    if (nativeMapView != null) {
      nativeMapView.removeAnnotations(ids);
    }
  }
}