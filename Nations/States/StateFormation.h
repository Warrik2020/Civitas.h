#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::States
{
    class StateFormation : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit StateFormation(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.States", "StateFormation") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void nationId(int value) const { WriteField<int>("nationId", value); }
        int seedTile() const { return ReadField<int>("seedTile"); }
        void seedTile(int value) const { WriteField<int>("seedTile", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void tiles(int value) const { WriteField<int>("tiles", value); }
        float progress() const { return ReadField<float>("progress"); }
        void progress(float value) const { WriteField<float>("progress", value); }
        int startedTick() const { return ReadField<int>("startedTick"); }
        void startedTick(int value) const { WriteField<int>("startedTick", value); }
        void* name() const { return ReadField<void*>("name"); }
        void name(void* value) const { WriteField<void*>("name", value); }
        bool drawn() const { return ReadField<bool>("drawn"); }
        void drawn(bool value) const { WriteField<bool>("drawn", value); }
        void* stroke() const { return ReadField<void*>("stroke"); }
        void stroke(void* value) const { WriteField<void*>("stroke", value); }
    };
}
