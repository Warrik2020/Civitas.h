#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Rendering::Fx
{
    class WarFxBatch : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit WarFxBatch(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Rendering.Fx", "WarFxBatch") {}
    public:
        void Dispose() const { Call("Dispose", nullptr, 0); }
        void Add(void* p) const { void* __callArgs[] = { p }; Call("Add", __callArgs, 1); }
        void AddImmediate(void* p) const { void* __callArgs[] = { p }; Call("AddImmediate", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        void Advance(float dt, void* wind) const { void* __callArgs[] = { &dt, wind }; Call("Advance", __callArgs, 2); }
        void Build(float pxPerTile, float minPx, float heightShift, bool draw) const { void* __callArgs[] = { &pxPerTile, &minPx, &heightShift, &draw }; Call("Build", __callArgs, 4); }
        void Render(void* localToWorld) const { void* __callArgs[] = { localToWorld }; Call("Render", __callArgs, 1); }
        void Hide() const { Call("Hide", nullptr, 0); }
        void SetFade(float fade) const { void* __callArgs[] = { &fade }; Call("SetFade", __callArgs, 1); }
        bool MarkCoarse() const { return ReadField<bool>("MarkCoarse"); }
        void MarkCoarse(bool value) const { WriteField<bool>("MarkCoarse", value); }
        float CoarseAlpha() const { return ReadField<float>("CoarseAlpha"); }
        void CoarseAlpha(float value) const { WriteField<float>("CoarseAlpha", value); }
    };
}
