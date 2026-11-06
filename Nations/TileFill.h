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
        void Region(void* grid, int start, void* into) const { void* args[] = { grid, &start, into }; CallStatic("Region", args, 3); }
        void Region(void* grid, int start, void* area, void* into) const { void* args[] = { grid, &start, area, into }; CallStatic("Region", args, 4); }
        int Fill(void* nations, int nationId, void* region, void* record) const { void* args[] = { nations, &nationId, region, record }; return CallStaticValue<int>("Fill", args, 4); }
        int Undo(void* nations, void* record) const { void* args[] = { nations, record }; return CallStaticValue<int>("Undo", args, 2); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int Wall() const { return ReadStaticField<int>("Wall"); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int prevOwner() const { return ReadField<int>("prevOwner"); }
        void SetPrevOwner(int value) const { WriteField<int>("prevOwner", value); }
    };
}
