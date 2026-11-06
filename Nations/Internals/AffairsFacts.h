#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsFacts : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsFacts(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsFacts") {}
    public:
        float CorruptionShare(void* w, int nation) const { void* __callArgs[] = { w, &nation }; return CallStaticValue<float>("CorruptionShare", __callArgs, 2); }
        void* IncidentCause(void* c, int kind, int other, int tick, void* v) const { void* __callArgs[] = { c, &kind, &other, &tick, v }; return CallStatic("IncidentCause", __callArgs, 5); }
    };
}
