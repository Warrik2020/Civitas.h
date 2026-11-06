#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class IdentityHomeland : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit IdentityHomeland(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "IdentityHomeland") {}
    public:
        int ChunkOf(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("ChunkOf", __callArgs, 2); }
        int Offset(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallStaticValue<int>("Offset", __callArgs, 2); }
        uint16_t Get(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<uint16_t>("Get", __callArgs, 2); }
        uint16_t GetAt(int tileIndex) const { void* __callArgs[] = { &tileIndex }; return CallValue<uint16_t>("GetAt", __callArgs, 1); }
        uint16_t Set(int x, int y, uint16_t key) const { void* __callArgs[] = { &x, &y, &key }; return CallValue<uint16_t>("Set", __callArgs, 3); }
        bool IsShared(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("IsShared", __callArgs, 1); }
        bool HasPage(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("HasPage", __callArgs, 1); }
        bool TryCollapse(int chunk, void* terrain) const { void* __callArgs[] = { &chunk, terrain }; return CallValue<bool>("TryCollapse", __callArgs, 2); }
        void ExpandAll() const { Call("ExpandAll", nullptr, 0); }
        int VerifyInterning(void* report) const { void* __callArgs[] = { report }; return CallValue<int>("VerifyInterning", __callArgs, 1); }
        void EnsureCounters(int rootCap) const { void* __callArgs[] = { &rootCap }; Call("EnsureCounters", __callArgs, 1); }
        int HomelandTilesOf(int root) const { void* __callArgs[] = { &root }; return CallValue<int>("HomelandTilesOf", __callArgs, 1); }
        int HeldTilesOf(int root) const { void* __callArgs[] = { &root }; return CallValue<int>("HeldTilesOf", __callArgs, 1); }
        float HeldFrac(int root) const { void* __callArgs[] = { &root }; return CallValue<float>("HeldFrac", __callArgs, 1); }
        void NoteHomelandChanged(int oldRoot, int newRoot, int dominantRoot) const { void* __callArgs[] = { &oldRoot, &newRoot, &dominantRoot }; Call("NoteHomelandChanged", __callArgs, 3); }
        void NoteDominanceChanged(int homelandRoot, int oldDominantRoot, int newDominantRoot) const { void* __callArgs[] = { &homelandRoot, &oldDominantRoot, &newDominantRoot }; Call("NoteDominanceChanged", __callArgs, 3); }
        int CopyCounters(void* homelandTiles, void* heldTiles) const { void* __callArgs[] = { &homelandTiles, &heldTiles }; return CallValue<int>("CopyCounters", __callArgs, 2); }
        void AddCounterDeltas(int root, int homelandDelta, int heldDelta) const { void* __callArgs[] = { &root, &homelandDelta, &heldDelta }; Call("AddCounterDeltas", __callArgs, 3); }
        void ClearCounters() const { Call("ClearCounters", nullptr, 0); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
        int PageLen() const { return ReadStaticField<int>("PageLen"); }
    };
}
