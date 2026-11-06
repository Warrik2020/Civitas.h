#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerSpearhead : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerSpearhead(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerSpearhead") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void SetId(int value) const { WriteField<int>("id", value); }
        int opId() const { return ReadField<int>("opId"); }
        void SetOpId(int value) const { WriteField<int>("opId", value); }
        void* controls() const { return ReadField<void*>("controls"); }
        void SetControls(void* value) const { WriteField<void*>("controls", value); }
        void* path() const { return ReadField<void*>("path"); }
        void SetPath(void* value) const { WriteField<void*>("path", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        void SetDivisions(void* value) const { WriteField<void*>("divisions", value); }
        bool autoPick() const { return ReadField<bool>("autoPick"); }
        void SetAutoPick(bool value) const { WriteField<bool>("autoPick", value); }
        float progress() const { return ReadField<float>("progress"); }
        void SetProgress(float value) const { WriteField<float>("progress", value); }
    };
}
