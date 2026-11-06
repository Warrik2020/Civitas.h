#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class TileGrid : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit TileGrid(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "TileGrid") {}
    public:
        void SetOwner(int index, int nationId) const { void* __callArgs[] = { &index, &nationId }; Call("SetOwner", __callArgs, 2); }
        void SetOwner(int index, int x, int y, int nationId) const { void* __callArgs[] = { &index, &x, &y, &nationId }; Call("SetOwner", __callArgs, 4); }
        int OwnedInChunk(int nationId, int chunk) const { void* __callArgs[] = { &nationId, &chunk }; return CallValue<int>("OwnedInChunk", __callArgs, 2); }
        int OwnedAnyInChunk(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<int>("OwnedAnyInChunk", __callArgs, 1); }
        void SetOrigin(int index, int nationId) const { void* __callArgs[] = { &index, &nationId }; Call("SetOrigin", __callArgs, 2); }
        void SetOrigin(int index, int x, int y, int nationId) const { void* __callArgs[] = { &index, &x, &y, &nationId }; Call("SetOrigin", __callArgs, 4); }
        void SetStateId(int index, int id) const { void* __callArgs[] = { &index, &id }; Call("SetStateId", __callArgs, 2); }
        void EnsureLod() const { Call("EnsureLod", nullptr, 0); }
        void InvalidateLod() const { Call("InvalidateLod", nullptr, 0); }
        void EnableLodPolitical(bool on) const { void* __callArgs[] = { &on }; Call("EnableLodPolitical", __callArgs, 1); }
        void SetReclaimed(int index, bool value) const { void* __callArgs[] = { &index, &value }; Call("SetReclaimed", __callArgs, 2); }
        void SetReclaimed(int index, int x, int y, bool value) const { void* __callArgs[] = { &index, &x, &y, &value }; Call("SetReclaimed", __callArgs, 4); }
        void NoteOwnersWrittenInBulk() const { Call("NoteOwnersWrittenInBulk", nullptr, 0); }
        void TouchAllChunks() const { Call("TouchAllChunks", nullptr, 0); }
        int Index(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("Index", __callArgs, 2); }
        int X(int index) const { void* __callArgs[] = { &index }; return CallValue<int>("X", __callArgs, 1); }
        int Y(int index) const { void* __callArgs[] = { &index }; return CallValue<int>("Y", __callArgs, 1); }
        bool InBounds(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<bool>("InBounds", __callArgs, 2); }
        bool IsLand(int index) const { void* __callArgs[] = { &index }; return CallValue<bool>("IsLand", __callArgs, 1); }
        bool IsOcean(int index) const { void* __callArgs[] = { &index }; return CallValue<bool>("IsOcean", __callArgs, 1); }
        bool IsCoast(int index) const { void* __callArgs[] = { &index }; return CallValue<bool>("IsCoast", __callArgs, 1); }
        bool IsClaimable(int index) const { void* __callArgs[] = { &index }; return CallValue<bool>("IsClaimable", __callArgs, 1); }
        bool OwnedBy(int index, int nationId) const { void* __callArgs[] = { &index, &nationId }; return CallValue<bool>("OwnedBy", __callArgs, 2); }
        bool OwnedBy(int x, int y, int nationId) const { void* __callArgs[] = { &x, &y, &nationId }; return CallValue<bool>("OwnedBy", __callArgs, 3); }
        bool OpenTo(int index, int nationId) const { void* __callArgs[] = { &index, &nationId }; return CallValue<bool>("OpenTo", __callArgs, 2); }
        bool OpenTo(int x, int y, int nationId) const { void* __callArgs[] = { &x, &y, &nationId }; return CallValue<bool>("OpenTo", __callArgs, 3); }
        int width() const { return ReadField<int>("width"); }
        int height() const { return ReadField<int>("height"); }
        void* terrain() const { return ReadField<void*>("terrain"); }
        void* owner() const { return ReadField<void*>("owner"); }
        void* isCapital() const { return ReadField<void*>("isCapital"); }
        void* originNation() const { return ReadField<void*>("originNation"); }
        void* reclaimed() const { return ReadField<void*>("reclaimed"); }
        void* stateId() const { return ReadField<void*>("stateId"); }
        void* coastDist() const { return ReadField<void*>("coastDist"); }
        void coastDist(void* value) const { WriteField<void*>("coastDist", value); }
        void* nearestCoast() const { return ReadField<void*>("nearestCoast"); }
        void nearestCoast(void* value) const { WriteField<void*>("nearestCoast", value); }
        int landTileCount() const { return ReadField<int>("landTileCount"); }
        void landTileCount(int value) const { WriteField<int>("landTileCount", value); }
        void* chunks() const { return ReadField<void*>("chunks"); }
        void* lod() const { return ReadField<void*>("lod"); }
        void* lodPolitical() const { return ReadField<void*>("lodPolitical"); }
        void lodPolitical(void* value) const { WriteField<void*>("lodPolitical", value); }
        void* OwnersBulkWritten() const { return ReadField<void*>("OwnersBulkWritten"); }
        void OwnersBulkWritten(void* value) const { WriteField<void*>("OwnersBulkWritten", value); }
    };
}
