#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Weapons
{
    class ArmourPreset : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit ArmourPreset(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Weapons", "ArmourPreset") {}
    public:
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int kind() const { return ReadField<int>("kind"); }
        void SetKind(int value) const { WriteField<int>("kind", value); }
        void* template_() const { return ReadField<void*>("template"); }
        void SetTemplate(void* value) const { WriteField<void*>("template", value); }
        float dueYear() const { return ReadField<float>("dueYear"); }
        void SetDueYear(float value) const { WriteField<float>("dueYear", value); }
        float score() const { return ReadField<float>("score"); }
        void SetScore(float value) const { WriteField<float>("score", value); }
        float complexity() const { return ReadField<float>("complexity"); }
        void SetComplexity(float value) const { WriteField<float>("complexity", value); }
    };
}
