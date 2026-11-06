#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Politics
{
    class UnifyReactionDef : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnifyReactionDef(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Politics", "UnifyReactionDef") {}
    public:
        void* id() const { return ReadField<void*>("id"); }
        void SetId(void* value) const { WriteField<void*>("id", value); }
        void* file() const { return ReadField<void*>("file"); }
        void SetFile(void* value) const { WriteField<void*>("file", value); }
        int line() const { return ReadField<int>("line"); }
        void SetLine(int value) const { WriteField<int>("line", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        bool demand() const { return ReadField<bool>("demand"); }
        void SetDemand(bool value) const { WriteField<bool>("demand", value); }
        float weight() const { return ReadField<float>("weight"); }
        void SetWeight(float value) const { WriteField<float>("weight", value); }
        float chancePerYear() const { return ReadField<float>("chancePerYear"); }
        void SetChancePerYear(float value) const { WriteField<float>("chancePerYear", value); }
        float lastsYears() const { return ReadField<float>("lastsYears"); }
        void SetLastsYears(float value) const { WriteField<float>("lastsYears", value); }
        void* when() const { return ReadField<void*>("when"); }
        void* effects() const { return ReadField<void*>("effects"); }
        int action() const { return ReadField<int>("action"); }
        void SetAction(int value) const { WriteField<int>("action", value); }
        void* answer() const { return ReadField<void*>("answer"); }
        void SetAnswer(void* value) const { WriteField<void*>("answer", value); }
    };
}
