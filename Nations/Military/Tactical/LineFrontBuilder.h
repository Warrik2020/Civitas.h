#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../../CivitasCore.h"

namespace CivitasPoly::Nations::Military::Tactical
{
    class LineFrontBuilder : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit LineFrontBuilder(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military.Tactical", "LineFrontBuilder") {}
    public:
        void Build(int x0, int y0, int x1, int y1, void* side, void* toMetres, float spacing, int smoothPasses, float minLength, void* into) const { void* __callArgs[] = { &x0, &y0, &x1, &y1, side, toMetres, &spacing, &smoothPasses, &minLength, into }; CallStatic("Build", __callArgs, 10); }
    };
}
