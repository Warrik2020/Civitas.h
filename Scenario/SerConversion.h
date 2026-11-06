#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerConversion : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerConversion(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerConversion") {}
    public:
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int axis() const { return ReadField<int>("axis"); }
        void SetAxis(int value) const { WriteField<int>("axis", value); }
        int from() const { return ReadField<int>("from"); }
        void SetFrom(int value) const { WriteField<int>("from", value); }
        int to() const { return ReadField<int>("to"); }
        void SetTo(int value) const { WriteField<int>("to", value); }
        void* states() const { return ReadField<void*>("states"); }
        void SetStates(void* value) const { WriteField<void*>("states", value); }
        int next() const { return ReadField<int>("next"); }
        void SetNext(int value) const { WriteField<int>("next", value); }
        int started() const { return ReadField<int>("started"); }
        void SetStarted(int value) const { WriteField<int>("started", value); }
        int nextTick() const { return ReadField<int>("nextTick"); }
        void SetNextTick(int value) const { WriteField<int>("nextTick", value); }
        int converted() const { return ReadField<int>("converted"); }
        void SetConverted(int value) const { WriteField<int>("converted", value); }
        int refused() const { return ReadField<int>("refused"); }
        void SetRefused(int value) const { WriteField<int>("refused", value); }
    };
}
