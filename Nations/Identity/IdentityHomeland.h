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
        int ChunkOf(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("ChunkOf", args, 2); }
        int Offset(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<int>("Offset", args, 2); }
        uint16_t Get(int x, int y) const { void* args[] = { &x, &y }; return CallValue<uint16_t>("Get", args, 2); }
        uint16_t GetAt(int tileIndex) const { void* args[] = { &tileIndex }; return CallValue<uint16_t>("GetAt", args, 1); }
        uint16_t Set(int x, int y, uint16_t key) const { void* args[] = { &x, &y, &key }; return CallValue<uint16_t>("Set", args, 3); }
        bool IsShared(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("IsShared", args, 1); }
        bool HasPage(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("HasPage", args, 1); }
        bool TryCollapse(int chunk, void* terrain) const { void* args[] = { &chunk, terrain }; return CallValue<bool>("TryCollapse", args, 2); }
        void ExpandAll() const { Call("ExpandAll", nullptr, 0); }
        int VerifyInterning(void* report) const { void* args[] = { report }; return CallValue<int>("VerifyInterning", args, 1); }
        void EnsureCounters(int rootCap) const { void* args[] = { &rootCap }; Call("EnsureCounters", args, 1); }
        int HomelandTilesOf(int root) const { void* args[] = { &root }; return CallValue<int>("HomelandTilesOf", args, 1); }
        int HeldTilesOf(int root) const { void* args[] = { &root }; return CallValue<int>("HeldTilesOf", args, 1); }
        float HeldFrac(int root) const { void* args[] = { &root }; return CallValue<float>("HeldFrac", args, 1); }
        void NoteHomelandChanged(int oldRoot, int newRoot, int dominantRoot) const { void* args[] = { &oldRoot, &newRoot, &dominantRoot }; Call("NoteHomelandChanged", args, 3); }
        void NoteDominanceChanged(int homelandRoot, int oldDominantRoot, int newDominantRoot) const { void* args[] = { &homelandRoot, &oldDominantRoot, &newDominantRoot }; Call("NoteDominanceChanged", args, 3); }
        int CopyCounters(void* homelandTiles, void* heldTiles) const { void* args[] = { &homelandTiles, &heldTiles }; return CallValue<int>("CopyCounters", args, 2); }
        void AddCounterDeltas(int root, int homelandDelta, int heldDelta) const { void* args[] = { &root, &homelandDelta, &heldDelta }; Call("AddCounterDeltas", args, 3); }
        void ClearCounters() const { Call("ClearCounters", nullptr, 0); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
        int PageLen() const { return ReadStaticField<int>("PageLen"); }
        void* page() const { return ReadField<void*>("page"); }
        void SetPage(void* value) const { WriteField<void*>("page", value); }
        int refs() const { return ReadField<int>("refs"); }
        void SetRefs(int value) const { WriteField<int>("refs", value); }
    };
}
