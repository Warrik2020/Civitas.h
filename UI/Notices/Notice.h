#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::Notices
{
    class Notice : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit Notice(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.Notices", "Notice") {}
    public:
        int id() const { return ReadField<int>("id"); }
        void id(int value) const { WriteField<int>("id", value); }
        int tick() const { return ReadField<int>("tick"); }
        void tick(int value) const { WriteField<int>("tick", value); }
        void* date() const { return ReadField<void*>("date"); }
        void date(void* value) const { WriteField<void*>("date", value); }
        int topic() const { return ReadField<int>("topic"); }
        void topic(int value) const { WriteField<int>("topic", value); }
        int tone() const { return ReadField<int>("tone"); }
        void tone(int value) const { WriteField<int>("tone", value); }
        void* glyph() const { return ReadField<void*>("glyph"); }
        void glyph(void* value) const { WriteField<void*>("glyph", value); }
        void* text() const { return ReadField<void*>("text"); }
        void text(void* value) const { WriteField<void*>("text", value); }
        void* key() const { return ReadField<void*>("key"); }
        void key(void* value) const { WriteField<void*>("key", value); }
        int count() const { return ReadField<int>("count"); }
        void count(int value) const { WriteField<int>("count", value); }
        int tile() const { return ReadField<int>("tile"); }
        void tile(int value) const { WriteField<int>("tile", value); }
        int nation() const { return ReadField<int>("nation"); }
        void nation(int value) const { WriteField<int>("nation", value); }
        void* open() const { return ReadField<void*>("open"); }
        void open(void* value) const { WriteField<void*>("open", value); }
        void* act() const { return ReadField<void*>("act"); }
        void act(void* value) const { WriteField<void*>("act", value); }
        void* actLabel() const { return ReadField<void*>("actLabel"); }
        void actLabel(void* value) const { WriteField<void*>("actLabel", value); }
        bool read() const { return ReadField<bool>("read"); }
        void read(bool value) const { WriteField<bool>("read", value); }
        float postedAt() const { return ReadField<float>("postedAt"); }
        void postedAt(float value) const { WriteField<float>("postedAt", value); }
        int version() const { return ReadField<int>("version"); }
        void version(int value) const { WriteField<int>("version", value); }
        bool quiet() const { return ReadField<bool>("quiet"); }
        void quiet(bool value) const { WriteField<bool>("quiet", value); }
    };
}
