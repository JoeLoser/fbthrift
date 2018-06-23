/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include "src/gen-cpp2/PubSubStreamingServiceAsyncClient.h"
#include "src/gen-cpp2/module_types.h"
#include <thrift/lib/cpp2/async/StreamGenerator.h>
#include <thrift/lib/cpp2/async/StreamPublisher.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace cpp2 {

class PubSubStreamingServiceSvAsyncIf {
 public:
  virtual ~PubSubStreamingServiceSvAsyncIf() {}
  virtual void async_tm_returnstream(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::Stream<int32_t>>> callback, int32_t i32_from, int32_t i32_to) = 0;
  virtual folly::Future<apache::thrift::Stream<int32_t>> future_returnstream(int32_t i32_from, int32_t i32_to) = 0;
  virtual void async_tm_takesstream(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, apache::thrift::SemiStream<int32_t> instream, int32_t other_param) = 0;
  virtual folly::Future<folly::Unit> future_takesstream(apache::thrift::SemiStream<int32_t> instream, int32_t other_param) = 0;
  virtual void async_tm_different(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::Stream<std::string>>> callback, apache::thrift::SemiStream<int32_t> foo, int64_t firstparam) = 0;
  virtual folly::Future<apache::thrift::Stream<std::string>> future_different(apache::thrift::SemiStream<int32_t> foo, int64_t firstparam) = 0;
  virtual void async_tm_normalthrows(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, apache::thrift::SemiStream<int32_t> foo) = 0;
  virtual folly::Future<folly::Unit> future_normalthrows(apache::thrift::SemiStream<int32_t> foo) = 0;
  virtual void async_tm_streamthrows(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::Stream<int32_t>>> callback, int32_t foo) = 0;
  virtual folly::Future<apache::thrift::Stream<int32_t>> future_streamthrows(int32_t foo) = 0;
  virtual void async_tm_boththrows(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::Stream<int32_t>>> callback, int32_t foo) = 0;
  virtual folly::Future<apache::thrift::Stream<int32_t>> future_boththrows(int32_t foo) = 0;
  virtual void async_tm_responseandstreamthrows(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::ResponseAndStream<int32_t,int32_t>>> callback, int32_t foo) = 0;
  virtual folly::Future<apache::thrift::ResponseAndStream<int32_t,int32_t>> future_responseandstreamthrows(int32_t foo) = 0;
};

class PubSubStreamingServiceAsyncProcessor;

class PubSubStreamingServiceSvIf : public PubSubStreamingServiceSvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef PubSubStreamingServiceAsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual apache::thrift::Stream<int32_t> returnstream(int32_t /*i32_from*/, int32_t /*i32_to*/);
  folly::Future<apache::thrift::Stream<int32_t>> future_returnstream(int32_t i32_from, int32_t i32_to) override;
  void async_tm_returnstream(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::Stream<int32_t>>> callback, int32_t i32_from, int32_t i32_to) override;
  virtual void takesstream(apache::thrift::SemiStream<int32_t> /*instream*/, int32_t /*other_param*/);
  folly::Future<folly::Unit> future_takesstream(apache::thrift::SemiStream<int32_t> instream, int32_t other_param) override;
  void async_tm_takesstream(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, apache::thrift::SemiStream<int32_t> instream, int32_t other_param) override;
  virtual apache::thrift::Stream<std::string> different(apache::thrift::SemiStream<int32_t> /*foo*/, int64_t /*firstparam*/);
  folly::Future<apache::thrift::Stream<std::string>> future_different(apache::thrift::SemiStream<int32_t> foo, int64_t firstparam) override;
  void async_tm_different(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::Stream<std::string>>> callback, apache::thrift::SemiStream<int32_t> foo, int64_t firstparam) override;
  virtual void normalthrows(apache::thrift::SemiStream<int32_t> /*foo*/);
  folly::Future<folly::Unit> future_normalthrows(apache::thrift::SemiStream<int32_t> foo) override;
  void async_tm_normalthrows(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, apache::thrift::SemiStream<int32_t> foo) override;
  virtual apache::thrift::Stream<int32_t> streamthrows(int32_t /*foo*/);
  folly::Future<apache::thrift::Stream<int32_t>> future_streamthrows(int32_t foo) override;
  void async_tm_streamthrows(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::Stream<int32_t>>> callback, int32_t foo) override;
  virtual apache::thrift::Stream<int32_t> boththrows(int32_t /*foo*/);
  folly::Future<apache::thrift::Stream<int32_t>> future_boththrows(int32_t foo) override;
  void async_tm_boththrows(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::Stream<int32_t>>> callback, int32_t foo) override;
  virtual apache::thrift::ResponseAndStream<int32_t,int32_t> responseandstreamthrows(int32_t /*foo*/);
  folly::Future<apache::thrift::ResponseAndStream<int32_t,int32_t>> future_responseandstreamthrows(int32_t foo) override;
  void async_tm_responseandstreamthrows(std::unique_ptr<apache::thrift::HandlerCallback<apache::thrift::ResponseAndStream<int32_t,int32_t>>> callback, int32_t foo) override;
  template <typename T>
  std::pair<apache::thrift::Stream<T>, apache::thrift::StreamPublisher<T>>
  createStreamPublisher(folly::Function<void()> onCanceled, size_t bufferSizeLimit = apache::thrift::StreamPublisher<T>::kNoLimit) {
    return apache::thrift::StreamPublisher<T>::create(
        folly::SerialExecutor::create(
            folly::getKeepAliveToken(getThreadManager())),
        std::move(onCanceled),
        bufferSizeLimit);
  }
  template <typename Generator>
  auto createStreamGenerator(Generator&& generator) {
    return apache::thrift::StreamGenerator::create(
        folly::SerialExecutor::create(
            folly::getKeepAliveToken(getThreadManager())),
        std::forward<Generator>(generator));
  }
};

class PubSubStreamingServiceSvNull : public PubSubStreamingServiceSvIf {
 public:
  apache::thrift::Stream<int32_t> returnstream(int32_t /*i32_from*/, int32_t /*i32_to*/) override;
  void takesstream(apache::thrift::SemiStream<int32_t> /*instream*/, int32_t /*other_param*/) override;
  apache::thrift::Stream<std::string> different(apache::thrift::SemiStream<int32_t> /*foo*/, int64_t /*firstparam*/) override;
  void normalthrows(apache::thrift::SemiStream<int32_t> /*foo*/) override;
  apache::thrift::Stream<int32_t> streamthrows(int32_t /*foo*/) override;
  apache::thrift::Stream<int32_t> boththrows(int32_t /*foo*/) override;
  apache::thrift::ResponseAndStream<int32_t,int32_t> responseandstreamthrows(int32_t /*foo*/) override;
};

class PubSubStreamingServiceAsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
  using HasFrozen2 = std::false_type;
 protected:
  PubSubStreamingServiceSvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<PubSubStreamingServiceAsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const PubSubStreamingServiceAsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const PubSubStreamingServiceAsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<PubSubStreamingServiceAsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const PubSubStreamingServiceAsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const PubSubStreamingServiceAsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_returnstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_returnstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndStream<folly::IOBufQueue, folly::IOBufQueue> return_returnstream(int32_t protoSeqId, apache::thrift::ContextStack* ctx, apache::thrift::Stream<int32_t> _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_returnstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_takesstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_takesstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_takesstream(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_takesstream(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_different(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_different(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndStream<folly::IOBufQueue, folly::IOBufQueue> return_different(int32_t protoSeqId, apache::thrift::ContextStack* ctx, apache::thrift::Stream<std::string> _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_different(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_normalthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_normalthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_normalthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_normalthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_streamthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_streamthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndStream<folly::IOBufQueue, folly::IOBufQueue> return_streamthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, apache::thrift::Stream<int32_t> _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_streamthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_boththrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_boththrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndStream<folly::IOBufQueue, folly::IOBufQueue> return_boththrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, apache::thrift::Stream<int32_t> _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_boththrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_responseandstreamthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_responseandstreamthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static apache::thrift::ResponseAndStream<folly::IOBufQueue, folly::IOBufQueue> return_responseandstreamthrows(int32_t protoSeqId, apache::thrift::ContextStack* ctx, apache::thrift::ResponseAndStream<int32_t,int32_t> _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_responseandstreamthrows(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  PubSubStreamingServiceAsyncProcessor(PubSubStreamingServiceSvIf* iface) :
      iface_(iface) {}

  virtual ~PubSubStreamingServiceAsyncProcessor() {}
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
