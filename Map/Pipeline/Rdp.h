#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Pipeline
{
    class Rdp : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Rdp(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Pipeline", "Rdp") {}
    public:
        void* Simplify(void* pts, float epsilon) const { void* __callArgs[] = { pts, &epsilon }; return CallStatic("Simplify", __callArgs, 2); }
    };
}
