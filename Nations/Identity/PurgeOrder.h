#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class PurgeOrder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PurgeOrder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "PurgeOrder") {}
    public:
        int people() const { return ReadField<int>("people"); }
        void people(int value) const { WriteField<int>("people", value); }
        int axis() const { return ReadField<int>("axis"); }
        void axis(int value) const { WriteField<int>("axis", value); }
        bool purge() const { return ReadField<bool>("purge"); }
        void purge(bool value) const { WriteField<bool>("purge", value); }
        bool realmScope() const { return ReadField<bool>("realmScope"); }
        void realmScope(bool value) const { WriteField<bool>("realmScope", value); }
        int sinceTick() const { return ReadField<int>("sinceTick"); }
        void sinceTick(int value) const { WriteField<int>("sinceTick", value); }
        int evalFromCircuit() const { return ReadField<int>("evalFromCircuit"); }
        void evalFromCircuit(int value) const { WriteField<int>("evalFromCircuit", value); }
        bool idle() const { return ReadField<bool>("idle"); }
        void idle(bool value) const { WriteField<bool>("idle", value); }
        int idleSinceTick() const { return ReadField<int>("idleSinceTick"); }
        void idleSinceTick(int value) const { WriteField<int>("idleSinceTick", value); }
        bool noScope() const { return ReadField<bool>("noScope"); }
        void noScope(bool value) const { WriteField<bool>("noScope", value); }
        int64_t removedQ() const { return ReadField<int64_t>("removedQ"); }
        void removedQ(int64_t value) const { WriteField<int64_t>("removedQ", value); }
        int64_t circuitPresentQ() const { return ReadField<int64_t>("circuitPresentQ"); }
        void circuitPresentQ(int64_t value) const { WriteField<int64_t>("circuitPresentQ", value); }
        int64_t circuitStrippedQ() const { return ReadField<int64_t>("circuitStrippedQ"); }
        void circuitStrippedQ(int64_t value) const { WriteField<int64_t>("circuitStrippedQ", value); }
        int64_t remainingQ() const { return ReadField<int64_t>("remainingQ"); }
        void remainingQ(int64_t value) const { WriteField<int64_t>("remainingQ", value); }
        int lastTickQ() const { return ReadField<int>("lastTickQ"); }
        void lastTickQ(int value) const { WriteField<int>("lastTickQ", value); }
    };
}
