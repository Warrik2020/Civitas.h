#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TileFill : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileFill(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TileFill") {}
    public:
        void Region(void* grid, int start, void* into) const { void* __callArgs[] = { grid, &start, into }; CallStatic("Region", __callArgs, 3); }
        void Region(void* grid, int start, void* area, void* into) const { void* __callArgs[] = { grid, &start, area, into }; CallStatic("Region", __callArgs, 4); }
        int Fill(void* nations, int nationId, void* region, void* record) const { void* __callArgs[] = { nations, &nationId, region, record }; return CallStaticValue<int>("Fill", __callArgs, 4); }
        int Undo(void* nations, void* record) const { void* __callArgs[] = { nations, record }; return CallStaticValue<int>("Undo", __callArgs, 2); }
        int Wall() const { return ReadStaticField<int>("Wall"); }
    };
}
