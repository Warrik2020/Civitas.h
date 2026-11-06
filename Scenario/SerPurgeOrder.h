#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Scenario
{
    class SerPurgeOrder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SerPurgeOrder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Scenario", "SerPurgeOrder") {}
    public:
        int people() const { return ReadField<int>("people"); }
        void people(int value) const { WriteField<int>("people", value); }
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        int sinceTick() const { return ReadField<int>("sinceTick"); }
        void sinceTick(int value) const { WriteField<int>("sinceTick", value); }
        int64_t removedQ() const { return ReadField<int64_t>("removedQ"); }
        void removedQ(int64_t value) const { WriteField<int64_t>("removedQ", value); }
        int64_t remainingQ() const { return ReadField<int64_t>("remainingQ"); }
        void remainingQ(int64_t value) const { WriteField<int64_t>("remainingQ", value); }
        bool idle() const { return ReadField<bool>("idle"); }
        void idle(bool value) const { WriteField<bool>("idle", value); }
        int idleSinceTick() const { return ReadField<int>("idleSinceTick"); }
        void idleSinceTick(int value) const { WriteField<int>("idleSinceTick", value); }
    };
}
