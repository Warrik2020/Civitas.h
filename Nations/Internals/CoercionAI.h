#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class CoercionAI : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit CoercionAI(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "CoercionAI") {}
    public:
        bool Refused(void* rel, int sender, int tick) const { void* args[] = { rel, &sender, &tick }; return CallStaticValue<bool>("Refused", args, 3); }
        void Evaluate(void* n, void* it, void* myRelations, void* ctx, void* mgr) const { void* args[] = { n, it, myRelations, &ctx, mgr }; CallStatic("Evaluate", args, 5); }
        bool BackDemands() const { return ReadStaticField<bool>("BackDemands"); }
        void SetBackDemands(bool value) const { WriteStaticField<bool>("BackDemands", value); }
    };
}
