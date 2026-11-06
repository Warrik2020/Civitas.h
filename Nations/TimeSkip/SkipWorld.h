#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class SkipWorld : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SkipWorld(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "SkipWorld") {}
    public:
        bool Find() const { return CallValue<bool>("Find", nullptr, 0); }
        void Begin() const { Call("Begin", nullptr, 0); }
        void AdvanceClocks(int ticks) const { void* args[] = { &ticks }; Call("AdvanceClocks", args, 1); }
        void Step(int span) const { void* args[] = { &span }; Call("Step", args, 1); }
        void ClearTimings() const { CallStatic("ClearTimings", nullptr, 0); }
        int64_t Stamp() const { return CallStaticValue<int64_t>("Stamp", nullptr, 0); }
        int64_t Note(const char* part, int64_t since) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(part ? part : "") : nullptr; void* args[] = { managed_0, &since }; return CallStaticValue<int64_t>("Note", args, 2); }
        void Finish(int elapsed) const { void* args[] = { &elapsed }; Call("Finish", args, 1); }
        void* nations() const { return ReadField<void*>("nations"); }
        void SetNations(void* value) const { WriteField<void*>("nations", value); }
        void* internals() const { return ReadField<void*>("internals"); }
        void SetInternals(void* value) const { WriteField<void*>("internals", value); }
        void* military() const { return ReadField<void*>("military"); }
        void SetMilitary(void* value) const { WriteField<void*>("military", value); }
        void* industry() const { return ReadField<void*>("industry"); }
        void SetIndustry(void* value) const { WriteField<void*>("industry", value); }
        void* revolts() const { return ReadField<void*>("revolts"); }
        void SetRevolts(void* value) const { WriteField<void*>("revolts", value); }
        void* identity() const { return ReadField<void*>("identity"); }
        void SetIdentity(void* value) const { WriteField<void*>("identity", value); }
        void* expansion() const { return ReadField<void*>("expansion"); }
        void SetExpansion(void* value) const { WriteField<void*>("expansion", value); }
        void* states() const { return ReadField<void*>("states"); }
        void SetStates(void* value) const { WriteField<void*>("states", value); }
        void* cities() const { return ReadField<void*>("cities"); }
        void SetCities(void* value) const { WriteField<void*>("cities", value); }
        void* playerMilitary() const { return ReadField<void*>("playerMilitary"); }
        void SetPlayerMilitary(void* value) const { WriteField<void*>("playerMilitary", value); }
        void* fronts() const { return ReadField<void*>("fronts"); }
        void SetFronts(void* value) const { WriteField<void*>("fronts", value); }
        void* model() const { return ReadField<void*>("model"); }
        void SetModel(void* value) const { WriteField<void*>("model", value); }
    };
}
