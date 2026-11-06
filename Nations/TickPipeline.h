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
        void Begin(void* root) const { void* __callArgs[] = { root }; Call("Begin", __callArgs, 1); }
        void AppendUsualCosts(void* sb, int top) const { void* __callArgs[] = { sb, &top }; Call("AppendUsualCosts", __callArgs, 2); }
        bool Step(int64_t deadline, bool force, bool forceAwaits = false) const { void* __callArgs[] = { &deadline, &force, &forceAwaits }; return CallValue<bool>("Step", __callArgs, 3); }
        void Abort() const { Call("Abort", nullptr, 0); }
        void Drain(void* e) const { void* __callArgs[] = { e }; CallStatic("Drain", __callArgs, 1); }
        int MaxSafePointsPerStep() const { return ReadField<int>("MaxSafePointsPerStep"); }
        void MaxSafePointsPerStep(int value) const { WriteField<int>("MaxSafePointsPerStep", value); }
    };
}
