#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct _LocalisationMessages_t
{
    wchar_t *about_to_patch;
    wchar_t *ok;
    wchar_t *yay;
    wchar_t *launch_xell_instead;
    wchar_t *failed_xell_launch;
    wchar_t *patch_successful;
    wchar_t *patch_successful_notif;
} LocalisationMessages_t;

extern LocalisationMessages_t english;
extern LocalisationMessages_t spanish;
extern LocalisationMessages_t canadian_french;
extern LocalisationMessages_t polish;
extern LocalisationMessages_t brazilian_portuguese;
extern LocalisationMessages_t portuguese;
extern LocalisationMessages_t german;
extern LocalisationMessages_t russian;
extern LocalisationMessages_t korean;
extern LocalisationMessages_t chinese_simplified;
extern LocalisationMessages_t swedish;
extern LocalisationMessages_t italian;
extern LocalisationMessages_t japanese;
