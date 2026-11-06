#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class MeleePreset : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MeleePreset(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "MeleePreset") {}
    public:
        void* key() const { return ReadField<void*>("key"); }
        void key(void* value) const { WriteField<void*>("key", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int kind() const { return ReadField<int>("kind"); }
        void kind(int value) const { WriteField<int>("kind", value); }
        bool primary() const { return ReadField<bool>("primary"); }
        void primary(bool value) const { WriteField<bool>("primary", value); }
        void* template_() const { return ReadField<void*>("template"); }
        void template_(void* value) const { WriteField<void*>("template", value); }
        float dueYear() const { return ReadField<float>("dueYear"); }
        void dueYear(float value) const { WriteField<float>("dueYear", value); }
        float score() const { return ReadField<float>("score"); }
        void score(float value) const { WriteField<float>("score", value); }
        float complexity() const { return ReadField<float>("complexity"); }
        void complexity(float value) const { WriteField<float>("complexity", value); }
    };
}
