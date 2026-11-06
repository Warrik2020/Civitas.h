#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Fx
{
    class WorksMesh : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WorksMesh(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Fx", "WorksMesh") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Begin() const { Call("Begin", nullptr, 0); }
        void End() const { Call("End", nullptr, 0); }
        void Render(void* localToWorld, float fade) const { void* __callArgs[] = { localToWorld, &fade }; Call("Render", __callArgs, 2); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void AddWorks(void* g, void* offset, float unitsPerMetre, float pxPerUnit, float fade, float minWidthPx = 2.2f) const { void* __callArgs[] = { g, offset, &unitsPerMetre, &pxPerUnit, &fade, &minWidthPx }; Call("AddWorks", __callArgs, 6); }
        void AddCrater(void* at, float radiusUnits, float pxPerUnit, float fade, float seed, float minRadiusPx = 1.5f) const { void* __callArgs[] = { at, &radiusUnits, &pxPerUnit, &fade, &seed, &minRadiusPx }; Call("AddCrater", __callArgs, 6); }
    };
}
