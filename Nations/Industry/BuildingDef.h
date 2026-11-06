#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Industry
{
    class BuildingDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit BuildingDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Industry", "BuildingDef") {}
    public:
        int type() const { return ReadField<int>("type"); }
        void SetType(int value) const { WriteField<int>("type", value); }
        int category() const { return ReadField<int>("category"); }
        void SetCategory(int value) const { WriteField<int>("category", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* blurb() const { return ReadField<void*>("blurb"); }
        void SetBlurb(void* value) const { WriteField<void*>("blurb", value); }
        void* techKey() const { return ReadField<void*>("techKey"); }
        void SetTechKey(void* value) const { WriteField<void*>("techKey", value); }
        int techIndex() const { return ReadField<int>("techIndex"); }
        void SetTechIndex(int value) const { WriteField<int>("techIndex", value); }
        float cost() const { return ReadField<float>("cost"); }
        void SetCost(float value) const { WriteField<float>("cost", value); }
        int buildTicks() const { return ReadField<int>("buildTicks"); }
        void SetBuildTicks(int value) const { WriteField<int>("buildTicks", value); }
        float power() const { return ReadField<float>("power"); }
        void SetPower(float value) const { WriteField<float>("power", value); }
        bool placeable() const { return ReadField<bool>("placeable"); }
        void SetPlaceable(bool value) const { WriteField<bool>("placeable", value); }
    };
}
