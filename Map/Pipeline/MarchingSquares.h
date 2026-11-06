#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Map::Pipeline
{
    class MarchingSquares : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MarchingSquares(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Map.Pipeline", "MarchingSquares") {}
    public:
        void* TraceOuter(void* label, int target, int w, int h) const { void* __callArgs[] = { label, &target, &w, &h }; return CallStatic("TraceOuter", __callArgs, 4); }
        void* TraceLoops(void* label, int target, int w, int h) const { void* __callArgs[] = { label, &target, &w, &h }; return CallStatic("TraceLoops", __callArgs, 4); }
        float SignedArea(void* pts) const { void* __callArgs[] = { pts }; return CallStaticValue<float>("SignedArea", __callArgs, 1); }
    };
}
