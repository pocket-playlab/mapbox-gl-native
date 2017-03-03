package com.mapbox.mapboxsdk.maps;


import android.support.annotation.NonNull;

import com.mapbox.mapboxsdk.annotations.Annotation;

import java.util.List;

interface Annotations {
  Annotation getAnnotation(long id);

  List<Annotation> getAnnotations();

  void removeAnnotation(long id);

  void removeAnnotation(@NonNull Annotation annotation);

  void removeAnnotations();

  void removeAnnotations(@NonNull List<? extends Annotation> annotationList);
}
