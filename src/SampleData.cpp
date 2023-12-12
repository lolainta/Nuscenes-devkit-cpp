#include "SampleData.hpp"

SampleData::SampleData(std::string token, std::string sample_token,
                       std::string ego_pose_token, uint64_t timestamp,
                       std::string fileformat, bool is_key_frame, size_t width,
                       size_t height, fs::path filename, std::string prev,
                       std::string next)
    : token(token),
      sample_token(sample_token),
      ego_pose_token(ego_pose_token),
      timestamp(timestamp),
      fileformat(fileformat),
      is_key_frame(is_key_frame),
      width(width),
      height(height),
      filename(filename),
      prev(prev),
      next(next) {}

SampleData::SampleData(const json &j)
    : token(j.at("token").get<std::string>()),
      sample_token(j.at("sample_token").get<std::string>()),
      ego_pose_token(j.at("ego_pose_token").get<std::string>()),
      timestamp(j.at("timestamp").get<uint64_t>()),
      fileformat(j.at("fileformat").get<std::string>()),
      is_key_frame(j.at("is_key_frame").get<bool>()),
      width(j.at("width").get<size_t>()),
      height(j.at("height").get<size_t>()),
      filename(j.at("filename").get<std::string>()),
      prev(j.at("prev").get<std::string>()),
      next(j.at("next").get<std::string>()) {}

const std::string &SampleData::get_token() const { return this->token; }

const std::string &SampleData::get_sample_token() const {
  return this->sample_token;
}

const std::string &SampleData::get_ego_pose_token() const {
  return this->ego_pose_token;
}

const uint64_t &SampleData::get_timestamp() const { return this->timestamp; }

const std::string &SampleData::get_fileformat() const {
  return this->fileformat;
}

const bool &SampleData::get_is_key_frame() const { return this->is_key_frame; }

const size_t &SampleData::get_width() const { return this->width; }

const size_t &SampleData::get_height() const { return this->height; }

const fs::path &SampleData::get_filename() const { return this->filename; }

const std::string &SampleData::get_prev() const { return this->prev; }

const std::string &SampleData::get_next() const { return this->next; }
