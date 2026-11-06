#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class SimTick : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SimTick(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "SimTick") {}
    public:
        void AcquireHold(void* owner) const { void* __callArgs[] = { owner }; CallStatic("AcquireHold", __callArgs, 1); }
        void ReleaseHold(void* owner) const { void* __callArgs[] = { owner }; CallStatic("ReleaseHold", __callArgs, 1); }
        void WriteBetweenTicks(void* key, void* write) const { void* __callArgs[] = { key, write }; CallStatic("WriteBetweenTicks", __callArgs, 2); }
        bool IsWaiting(void* key) const { void* __callArgs[] = { key }; return CallStaticValue<bool>("IsWaiting", __callArgs, 1); }
        void Settle(const char* why) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* __callArgs[] = { managed_0 }; CallStatic("Settle", __callArgs, 1); }
        void SettleIfOutOfStage(const char* why) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* __callArgs[] = { managed_0 }; CallStatic("SettleIfOutOfStage", __callArgs, 1); }
        void GuardWrite(const char* what) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(what ? what : "") : nullptr; void* __callArgs[] = { managed_0 }; CallStatic("GuardWrite", __callArgs, 1); }
        void RegisterFingerprint(const char* name, void* fold) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, fold }; CallStatic("RegisterFingerprint", __callArgs, 2); }
        bool Deterministic() const { return ReadStaticField<bool>("Deterministic"); }
        void Deterministic(bool value) const { WriteStaticField<bool>("Deterministic", value); }
        bool HoldTicks() const { return ReadStaticField<bool>("HoldTicks"); }
        void HoldTicks(bool value) const { WriteStaticField<bool>("HoldTicks", value); }
        float PressHoldSeconds() const { return ReadStaticField<float>("PressHoldSeconds"); }
        bool Guard() const { return ReadStaticField<bool>("Guard"); }
        void Guard(bool value) const { WriteStaticField<bool>("Guard", value); }
    };
}
