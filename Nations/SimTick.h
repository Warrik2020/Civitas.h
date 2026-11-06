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
        void AcquireHold(void* owner) const { void* args[] = { owner }; CallStatic("AcquireHold", args, 1); }
        void ReleaseHold(void* owner) const { void* args[] = { owner }; CallStatic("ReleaseHold", args, 1); }
        void WriteBetweenTicks(void* key, void* write) const { void* args[] = { key, write }; CallStatic("WriteBetweenTicks", args, 2); }
        bool IsWaiting(void* key) const { void* args[] = { key }; return CallStaticValue<bool>("IsWaiting", args, 1); }
        void Settle(const char* why) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* args[] = { managed_0 }; CallStatic("Settle", args, 1); }
        void SettleIfOutOfStage(const char* why) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(why ? why : "") : nullptr; void* args[] = { managed_0 }; CallStatic("SettleIfOutOfStage", args, 1); }
        void GuardWrite(const char* what) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(what ? what : "") : nullptr; void* args[] = { managed_0 }; CallStatic("GuardWrite", args, 1); }
        void RegisterFingerprint(const char* name, void* fold) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* args[] = { managed_0, fold }; CallStatic("RegisterFingerprint", args, 2); }
        bool Deterministic() const { return ReadStaticField<bool>("Deterministic"); }
        void SetDeterministic(bool value) const { WriteStaticField<bool>("Deterministic", value); }
        bool HoldTicks() const { return ReadStaticField<bool>("HoldTicks"); }
        void SetHoldTicks(bool value) const { WriteStaticField<bool>("HoldTicks", value); }
        float PressHoldSeconds() const { return ReadStaticField<float>("PressHoldSeconds"); }
        bool Guard() const { return ReadStaticField<bool>("Guard"); }
        void SetGuard(bool value) const { WriteStaticField<bool>("Guard", value); }
    };
}
