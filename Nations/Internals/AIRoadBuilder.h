#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AIRoadBuilder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AIRoadBuilder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AIRoadBuilder") {}
    public:
        void Reset() const { CallStatic("Reset", nullptr, 0); }
        void Evaluate(void* n, void* it, void* myRelations, void* ctx, float budget = -1f) const { void* args[] = { n, it, myRelations, &ctx, &budget }; CallStatic("Evaluate", args, 5); }
        int SearchCapOverride() const { return ReadStaticField<int>("SearchCapOverride"); }
        void SetSearchCapOverride(int value) const { WriteStaticField<int>("SearchCapOverride", value); }
    };
}
