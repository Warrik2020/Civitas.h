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
        void id(int value) const { WriteField<int>("id", value); }
        int opId() const { return ReadField<int>("opId"); }
        void opId(int value) const { WriteField<int>("opId", value); }
        void* controls() const { return ReadField<void*>("controls"); }
        void controls(void* value) const { WriteField<void*>("controls", value); }
        void* path() const { return ReadField<void*>("path"); }
        void path(void* value) const { WriteField<void*>("path", value); }
        void* divisions() const { return ReadField<void*>("divisions"); }
        void divisions(void* value) const { WriteField<void*>("divisions", value); }
        bool autoPick() const { return ReadField<bool>("autoPick"); }
        void autoPick(bool value) const { WriteField<bool>("autoPick", value); }
        float progress() const { return ReadField<float>("progress"); }
        void progress(float value) const { WriteField<float>("progress", value); }
    };
}
