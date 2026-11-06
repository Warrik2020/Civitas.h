#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class SparseField : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit SparseField(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "SparseField") {}
    public:
        void TrackSaturation(void* grid) const { void* __callArgs[] = { grid }; Call("TrackSaturation", __callArgs, 1); }
        void TrackIso(float iso) const { void* __callArgs[] = { &iso }; Call("TrackIso", __callArgs, 1); }
        int IsoCount(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<int>("IsoCount", __callArgs, 1); }
        bool IsoEmptyAround(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("IsoEmptyAround", __callArgs, 1); }
        void NoteDirectWrite(int chunk, float old, float v) const { void* __callArgs[] = { &chunk, &old, &v }; Call("NoteDirectWrite", __callArgs, 3); }
        bool Saturated(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("Saturated", __callArgs, 1); }
        bool Full(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("Full", __callArgs, 1); }
        void NoteLandTileFull(int chunk) const { void* __callArgs[] = { &chunk }; Call("NoteLandTileFull", __callArgs, 1); }
        int ChunkOf(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<int>("ChunkOf", __callArgs, 2); }
        int Offset(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallStaticValue<int>("Offset", __callArgs, 2); }
        void* Page(int chunk) const { void* __callArgs[] = { &chunk }; return Call("Page", __callArgs, 1); }
        void* EnsurePage(int chunk) const { void* __callArgs[] = { &chunk }; return Call("EnsurePage", __callArgs, 1); }
        float Get(int x, int y) const { void* __callArgs[] = { &x, &y }; return CallValue<float>("Get", __callArgs, 2); }
        void Set(int x, int y, float v) const { void* __callArgs[] = { &x, &y, &v }; Call("Set", __callArgs, 3); }
        bool RegionEmpty(int chunk) const { void* __callArgs[] = { &chunk }; return CallValue<bool>("RegionEmpty", __callArgs, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
        int PageLen() const { return ReadStaticField<int>("PageLen"); }
        int PageEpoch() const { return ReadStaticField<int>("PageEpoch"); }
        void PageEpoch(int value) const { WriteStaticField<int>("PageEpoch", value); }
    };
}
