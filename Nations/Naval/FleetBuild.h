#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Naval
{
    class FleetBuild : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit FleetBuild(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Naval", "FleetBuild") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int cityTile() const { return ReadField<int>("cityTile"); }
        void SetCityTile(int value) const { WriteField<int>("cityTile", value); }
        float progress() const { return ReadField<float>("progress"); }
        void SetProgress(float value) const { WriteField<float>("progress", value); }
        float buildTicks() const { return ReadField<float>("buildTicks"); }
        void SetBuildTicks(float value) const { WriteField<float>("buildTicks", value); }
        void* stalled() const { return ReadField<void*>("stalled"); }
        void SetStalled(void* value) const { WriteField<void*>("stalled", value); }
    };
}
