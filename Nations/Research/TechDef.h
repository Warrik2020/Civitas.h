#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Research
{
    class TechDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TechDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Research", "TechDef") {}
    public:
        int index() const { return ReadField<int>("index"); }
        void SetIndex(int value) const { WriteField<int>("index", value); }
        void* key() const { return ReadField<void*>("key"); }
        void SetKey(void* value) const { WriteField<void*>("key", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        int category() const { return ReadField<int>("category"); }
        void SetCategory(int value) const { WriteField<int>("category", value); }
        float cost() const { return ReadField<float>("cost"); }
        void SetCost(float value) const { WriteField<float>("cost", value); }
        void* prereqs() const { return ReadField<void*>("prereqs"); }
        void SetPrereqs(void* value) const { WriteField<void*>("prereqs", value); }
        void* effects() const { return ReadField<void*>("effects"); }
        void SetEffects(void* value) const { WriteField<void*>("effects", value); }
        int unlocksDivision() const { return ReadField<int>("unlocksDivision"); }
        void SetUnlocksDivision(int value) const { WriteField<int>("unlocksDivision", value); }
        int year() const { return ReadField<int>("year"); }
        void SetYear(int value) const { WriteField<int>("year", value); }
        float tier() const { return ReadField<float>("tier"); }
        void SetTier(float value) const { WriteField<float>("tier", value); }
    };
}
