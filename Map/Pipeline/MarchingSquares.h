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
        void* TraceOuter(void* label, int target, int w, int h) const { void* args[] = { label, &target, &w, &h }; return CallStatic("TraceOuter", args, 4); }
        void* TraceLoops(void* label, int target, int w, int h) const { void* args[] = { label, &target, &w, &h }; return CallStatic("TraceLoops", args, 4); }
        float SignedArea(void* pts) const { void* args[] = { pts }; return CallStaticValue<float>("SignedArea", args, 1); }
    };
}
