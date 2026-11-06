#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TickPipeline : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TickPipeline(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TickPipeline") {}
    public:
        void Begin(void* root) const { void* args[] = { root }; Call("Begin", args, 1); }
        void AppendUsualCosts(void* sb, int top) const { void* args[] = { sb, &top }; Call("AppendUsualCosts", args, 2); }
        bool Step(int64_t deadline, bool force, bool forceAwaits = false) const { void* args[] = { &deadline, &force, &forceAwaits }; return CallValue<bool>("Step", args, 3); }
        void Abort() const { Call("Abort", nullptr, 0); }
        void Drain(void* e) const { void* args[] = { e }; CallStatic("Drain", args, 1); }
        int MaxSafePointsPerStep() const { return ReadField<int>("MaxSafePointsPerStep"); }
        void SetMaxSafePointsPerStep(int value) const { WriteField<int>("MaxSafePointsPerStep", value); }
        void* e() const { return ReadField<void*>("e"); }
        void SetE(void* value) const { WriteField<void*>("e", value); }
        void* phase() const { return ReadField<void*>("phase"); }
        void SetPhase(void* value) const { WriteField<void*>("phase", value); }
        void* owner() const { return ReadField<void*>("owner"); }
        void SetOwner(void* value) const { WriteField<void*>("owner", value); }
        void* inherited() const { return ReadField<void*>("inherited"); }
        void SetInherited(void* value) const { WriteField<void*>("inherited", value); }
        void* own() const { return ReadField<void*>("own"); }
        void SetOwn(void* value) const { WriteField<void*>("own", value); }
    };
}
