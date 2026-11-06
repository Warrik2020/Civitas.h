#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerRevoltQuiet : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerRevoltQuiet(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerRevoltQuiet") {}
    public:
        int nation() const { return ReadField<int>("nation"); }
        void nation(int value) const { WriteField<int>("nation", value); }
        int quietUntilTick() const { return ReadField<int>("quietUntilTick"); }
        void quietUntilTick(int value) const { WriteField<int>("quietUntilTick", value); }
        int armyCap() const { return ReadField<int>("armyCap"); }
        void armyCap(int value) const { WriteField<int>("armyCap", value); }
        int homeland() const { return ReadField<int>("homeland"); }
        void homeland(int value) const { WriteField<int>("homeland", value); }
        int homelandParent() const { return ReadField<int>("homelandParent"); }
        void homelandParent(int value) const { WriteField<int>("homelandParent", value); }
        bool neglect() const { return ReadField<bool>("neglect"); }
        void neglect(bool value) const { WriteField<bool>("neglect", value); }
    };
}
