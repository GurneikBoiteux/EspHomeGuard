#ifndef ULTRASONIC_H
#define ULTRASONIC_H

#ifdef __cplusplus
extern "C" {
#endif

void ultrasonic_init();

int ultrasonic_get_distance_cm();

#ifdef __cplusplus
}
#endif

#endif // ULTRASONIC_H
