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
        void index(int value) const { WriteField<int>("index", value); }
        void* key() const { return ReadField<void*>("key"); }
        void key(void* value) const { WriteField<void*>("key", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        int category() const { return ReadField<int>("category"); }
        void category(int value) const { WriteField<int>("category", value); }
        float cost() const { return ReadField<float>("cost"); }
        void cost(float value) const { WriteField<float>("cost", value); }
        void* prereqs() const { return ReadField<void*>("prereqs"); }
        void prereqs(void* value) const { WriteField<void*>("prereqs", value); }
        void* effects() const { return ReadField<void*>("effects"); }
        void effects(void* value) const { WriteField<void*>("effects", value); }
        int unlocksDivision() const { return ReadField<int>("unlocksDivision"); }
        void unlocksDivision(int value) const { WriteField<int>("unlocksDivision", value); }
        int year() const { return ReadField<int>("year"); }
        void year(int value) const { WriteField<int>("year", value); }
        float tier() const { return ReadField<float>("tier"); }
        void tier(float value) const { WriteField<float>("tier", value); }
    };
}
