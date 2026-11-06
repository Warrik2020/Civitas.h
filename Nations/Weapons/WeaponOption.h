#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class WeaponOption : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WeaponOption(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "WeaponOption") {}
    public:
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* blurb() const { return ReadField<void*>("blurb"); }
        void SetBlurb(void* value) const { WriteField<void*>("blurb", value); }
        void* techKeys() const { return ReadField<void*>("techKeys"); }
        void SetTechKeys(void* value) const { WriteField<void*>("techKeys", value); }
        void* techIndex() const { return ReadField<void*>("techIndex"); }
        void SetTechIndex(void* value) const { WriteField<void*>("techIndex", value); }
        float dueYear() const { return ReadField<float>("dueYear"); }
        void SetDueYear(float value) const { WriteField<float>("dueYear", value); }
    };
}
