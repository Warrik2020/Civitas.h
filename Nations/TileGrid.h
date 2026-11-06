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
        void SetOwner(int index, int nationId) const { void* args[] = { &index, &nationId }; Call("SetOwner", args, 2); }
        void SetOwner(int index, int x, int y, int nationId) const { void* args[] = { &index, &x, &y, &nationId }; Call("SetOwner", args, 4); }
        int OwnedInChunk(int nationId, int chunk) const { void* args[] = { &nationId, &chunk }; return CallValue<int>("OwnedInChunk", args, 2); }
        int OwnedAnyInChunk(int chunk) const { void* args[] = { &chunk }; return CallValue<int>("OwnedAnyInChunk", args, 1); }
        void SetOrigin(int index, int nationId) const { void* args[] = { &index, &nationId }; Call("SetOrigin", args, 2); }
        void SetOrigin(int index, int x, int y, int nationId) const { void* args[] = { &index, &x, &y, &nationId }; Call("SetOrigin", args, 4); }
        void SetStateId(int index, int id) const { void* args[] = { &index, &id }; Call("SetStateId", args, 2); }
        void EnsureLod() const { Call("EnsureLod", nullptr, 0); }
        void InvalidateLod() const { Call("InvalidateLod", nullptr, 0); }
        void EnableLodPolitical(bool on) const { void* args[] = { &on }; Call("EnableLodPolitical", args, 1); }
        void SetReclaimed(int index, bool value) const { void* args[] = { &index, &value }; Call("SetReclaimed", args, 2); }
        void SetReclaimed(int index, int x, int y, bool value) const { void* args[] = { &index, &x, &y, &value }; Call("SetReclaimed", args, 4); }
        void NoteOwnersWrittenInBulk() const { Call("NoteOwnersWrittenInBulk", nullptr, 0); }
        void TouchAllChunks() const { Call("TouchAllChunks", nullptr, 0); }
        int Index(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("Index", args, 2); }
        int X(int index) const { void* args[] = { &index }; return CallValue<int>("X", args, 1); }
        int Y(int index) const { void* args[] = { &index }; return CallValue<int>("Y", args, 1); }
        bool InBounds(int x, int y) const { void* args[] = { &x, &y }; return CallValue<bool>("InBounds", args, 2); }
        bool IsLand(int index) const { void* args[] = { &index }; return CallValue<bool>("IsLand", args, 1); }
        bool IsOcean(int index) const { void* args[] = { &index }; return CallValue<bool>("IsOcean", args, 1); }
        bool IsCoast(int index) const { void* args[] = { &index }; return CallValue<bool>("IsCoast", args, 1); }
        bool IsClaimable(int index) const { void* args[] = { &index }; return CallValue<bool>("IsClaimable", args, 1); }
        bool OwnedBy(int index, int nationId) const { void* args[] = { &index, &nationId }; return CallValue<bool>("OwnedBy", args, 2); }
        bool OwnedBy(int x, int y, int nationId) const { void* args[] = { &x, &y, &nationId }; return CallValue<bool>("OwnedBy", args, 3); }
        bool OpenTo(int index, int nationId) const { void* args[] = { &index, &nationId }; return CallValue<bool>("OpenTo", args, 2); }
        bool OpenTo(int x, int y, int nationId) const { void* args[] = { &x, &y, &nationId }; return CallValue<bool>("OpenTo", args, 3); }
        int width() const { return ReadField<int>("width"); }
        int height() const { return ReadField<int>("height"); }
        void* terrain() const { return ReadField<void*>("terrain"); }
        void* owner() const { return ReadField<void*>("owner"); }
        void* isCapital() const { return ReadField<void*>("isCapital"); }
        void* originNation() const { return ReadField<void*>("originNation"); }
        void* reclaimed() const { return ReadField<void*>("reclaimed"); }
        void* stateId() const { return ReadField<void*>("stateId"); }
        void* coastDist() const { return ReadField<void*>("coastDist"); }
        void SetCoastDist(void* value) const { WriteField<void*>("coastDist", value); }
        void* nearestCoast() const { return ReadField<void*>("nearestCoast"); }
        void SetNearestCoast(void* value) const { WriteField<void*>("nearestCoast", value); }
        int landTileCount() const { return ReadField<int>("landTileCount"); }
        void SetLandTileCount(int value) const { WriteField<int>("landTileCount", value); }
        void* chunks() const { return ReadField<void*>("chunks"); }
        void* lod() const { return ReadField<void*>("lod"); }
        void* lodPolitical() const { return ReadField<void*>("lodPolitical"); }
        void SetLodPolitical(void* value) const { WriteField<void*>("lodPolitical", value); }
        void* OwnersBulkWritten() const { return ReadField<void*>("OwnersBulkWritten"); }
        void SetOwnersBulkWritten(void* value) const { WriteField<void*>("OwnersBulkWritten", value); }
    };
}
