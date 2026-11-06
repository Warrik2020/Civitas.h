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
        void TrackSaturation(void* grid) const { void* args[] = { grid }; Call("TrackSaturation", args, 1); }
        void TrackIso(float iso) const { void* args[] = { &iso }; Call("TrackIso", args, 1); }
        int IsoCount(int chunk) const { void* args[] = { &chunk }; return CallValue<int>("IsoCount", args, 1); }
        bool IsoEmptyAround(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("IsoEmptyAround", args, 1); }
        void NoteDirectWrite(int chunk, float old, float v) const { void* args[] = { &chunk, &old, &v }; Call("NoteDirectWrite", args, 3); }
        bool Saturated(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("Saturated", args, 1); }
        bool Full(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("Full", args, 1); }
        void NoteLandTileFull(int chunk) const { void* args[] = { &chunk }; Call("NoteLandTileFull", args, 1); }
        int ChunkOf(int x, int y) const { void* args[] = { &x, &y }; return CallValue<int>("ChunkOf", args, 2); }
        int Offset(int x, int y) const { void* args[] = { &x, &y }; return CallStaticValue<int>("Offset", args, 2); }
        void* Page(int chunk) const { void* args[] = { &chunk }; return Call("Page", args, 1); }
        void* EnsurePage(int chunk) const { void* args[] = { &chunk }; return Call("EnsurePage", args, 1); }
        float Get(int x, int y) const { void* args[] = { &x, &y }; return CallValue<float>("Get", args, 2); }
        void Set(int x, int y, float v) const { void* args[] = { &x, &y, &v }; Call("Set", args, 3); }
        bool RegionEmpty(int chunk) const { void* args[] = { &chunk }; return CallValue<bool>("RegionEmpty", args, 1); }
        void Clear() const { Call("Clear", nullptr, 0); }
        int Shift() const { return ReadStaticField<int>("Shift"); }
        int Size() const { return ReadStaticField<int>("Size"); }
        int PageLen() const { return ReadStaticField<int>("PageLen"); }
        int PageEpoch() const { return ReadStaticField<int>("PageEpoch"); }
        void SetPageEpoch(int value) const { WriteStaticField<int>("PageEpoch", value); }
    };
}
