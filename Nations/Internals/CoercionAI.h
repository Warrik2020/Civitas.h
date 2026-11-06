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
        bool Refused(void* rel, int sender, int tick) const { void* __callArgs[] = { rel, &sender, &tick }; return CallStaticValue<bool>("Refused", __callArgs, 3); }
        void Evaluate(void* n, void* it, void* myRelations, void* ctx, void* mgr) const { void* __callArgs[] = { n, it, myRelations, &ctx, mgr }; CallStatic("Evaluate", __callArgs, 5); }
        bool BackDemands() const { return ReadStaticField<bool>("BackDemands"); }
        void BackDemands(bool value) const { WriteStaticField<bool>("BackDemands", value); }
    };
}
