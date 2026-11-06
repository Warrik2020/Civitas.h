#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyNames : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyNames(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyNames") {}
    public:
        void* For_(void* w, int self, int target, int people, void* f) const { void* args[] = { w, &self, &target, &people, &f }; return CallStatic("For", args, 5); }
        void* Render(const char* template_) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(template_ ? template_ : "") : nullptr; void* args[] = { managed_0 }; return Call("Render", args, 1); }
        void* people() const { return ReadField<void*>("people"); }
        void SetPeople(void* value) const { WriteField<void*>("people", value); }
        void* target() const { return ReadField<void*>("target"); }
        void SetTarget(void* value) const { WriteField<void*>("target", value); }
        void* targetCapital() const { return ReadField<void*>("targetCapital"); }
        void SetTargetCapital(void* value) const { WriteField<void*>("targetCapital", value); }
        void* faith() const { return ReadField<void*>("faith"); }
        void SetFaith(void* value) const { WriteField<void*>("faith", value); }
        void* targetFaith() const { return ReadField<void*>("targetFaith"); }
        void SetTargetFaith(void* value) const { WriteField<void*>("targetFaith", value); }
        void* protector() const { return ReadField<void*>("protector"); }
        void SetProtector(void* value) const { WriteField<void*>("protector", value); }
        void* rival() const { return ReadField<void*>("rival"); }
        void SetRival(void* value) const { WriteField<void*>("rival", value); }
        void* our() const { return ReadField<void*>("our"); }
        void SetOur(void* value) const { WriteField<void*>("our", value); }
        void* state() const { return ReadField<void*>("state"); }
        void SetState(void* value) const { WriteField<void*>("state", value); }
        void* subject() const { return ReadField<void*>("subject"); }
        void SetSubject(void* value) const { WriteField<void*>("subject", value); }
        void* family() const { return ReadField<void*>("family"); }
        void SetFamily(void* value) const { WriteField<void*>("family", value); }
        void* kin() const { return ReadField<void*>("kin"); }
        void SetKin(void* value) const { WriteField<void*>("kin", value); }
    };
}
